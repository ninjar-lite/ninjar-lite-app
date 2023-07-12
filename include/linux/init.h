#ifndef __LINUX_INIT_H
#define __LINUX_INIT_H

#define __used  __attribute__((used))
#define __section(name)     __attribute__((section(name)))

/* These are for everybody (although not all archs will actually
   discard it in modules) */
#define __init          __section(".init.text") //__cold  __latent_entropy __noinitretpoline
#define __initdata      __section(".init.data")
#define __initconst     __section(".init.rodata")
#define __exitdata      __section(".exit.data")
#define __exit_call     __used __section(".exitcall.exit")

#define __stringify_1(x...) #x
#define __stringify(x...)   __stringify_1(x)

#define ___PASTE(a,b) a##b
#define __PASTE(a,b) ___PASTE(a,b)

// #define UNIQUE_NAME(__name) __PASTE(__UNIQUE_ID_, __name)

// #define __UNIQUE_ID(prefix) __PASTE(__PASTE(__UNIQUE_ID_, prefix), __COUNTER__)
#define __UNIQUE_ID(prefix) __PASTE(prefix, __COUNTER__)

#define ___ADDRESSABLE(sym, __attrs) \
        static void * __used __attrs \
                __UNIQUE_ID(__PASTE(__addressable_,sym)) = (void *)&sym;
#define __ADDRESSABLE(sym) \
        ___ADDRESSABLE(sym, __section(".discard.addressable"))

/*
 * Used for initialization calls..
 */
typedef int (*initcall_t)(void);
typedef void (*exitcall_t)(void);
typedef int initcall_entry_t;
typedef long addressable_entry_t;

#ifndef __KBUILD_MODNAME
    #define __KBUILD_MODNAME    kmod
#endif
/* Format: <modname>__<counter>_<line>_<fn> */
#define __initcall_id(fn)                                       \
        __PASTE(__KBUILD_MODNAME,                               \
        __PASTE(__,                                             \
        __PASTE(__COUNTER__,                                    \
        __PASTE(_,                                              \
        __PASTE(__LINE__,                                       \
        __PASTE(_, fn))))))

/* Format: __<prefix>__<iid><id> */
#define __initcall_name(prefix, __iid, id)                      \
        __PASTE(__,                                             \
        __PASTE(prefix,                                         \
        __PASTE(__,                                             \
        __PASTE(__iid, id))))


#define __initcall_section(__sec, __iid)                        \
        #__sec ".init"

#define __initcall_stub(fn, __iid, id)  fn

#define __define_initcall_stub(__stub, fn)                      \
        __ADDRESSABLE(fn)

#define ____define_initcall(fn, __stub, __name, __sec)          \
        __define_initcall_stub(__stub, fn)  \
        asm(".section   \"" __sec "\", \"a\"            \n"     \
            __stringify(__name) ":                      \n"     \
            ".long      " __stringify(__stub) " - .     \n"     \
            ".previous                                  \n");

#define __unique_initcall(fn, id, __sec, __iid)                 \
        ____define_initcall(fn,                                 \
                __initcall_stub(fn, __iid, id),                 \
                __initcall_name(initcall, __iid, id),           \
                __initcall_section(__sec, __iid))

#define ___define_initcall(fn, id, __sec)                       \
        __unique_initcall(fn, id, __sec, __initcall_id(fn))

#define __define_initcall(fn, id) ___define_initcall(fn, id, .initcall##id)

/*
 * Early initcalls run before initializing SMP.
 *
 * Only for built-in code, not modules.
 */
#define early_initcall(fn)              __define_initcall(fn, early)

/*
 * A "pure" initcall has no dependencies on anything else, and purely
 * initializes variables that couldn't be statically initialized.
 *
 * This only exists for built-in code, not for modules.
 * Keep main.c:initcall_level_names[] in sync.
 */
#define pure_initcall(fn)               __define_initcall(fn, 0)

#define core_initcall(fn)               __define_initcall(fn, 1)
#define core_initcall_sync(fn)          __define_initcall(fn, 1s)
#define postcore_initcall(fn)           __define_initcall(fn, 2)
#define postcore_initcall_sync(fn)      __define_initcall(fn, 2s)
#define arch_initcall(fn)               __define_initcall(fn, 3)
#define arch_initcall_sync(fn)          __define_initcall(fn, 3s)
#define subsys_initcall(fn)             __define_initcall(fn, 4)
#define subsys_initcall_sync(fn)        __define_initcall(fn, 4s)
#define fs_initcall(fn)                 __define_initcall(fn, 5)
#define fs_initcall_sync(fn)            __define_initcall(fn, 5s)
#define rootfs_initcall(fn)             __define_initcall(fn, rootfs)
#define device_initcall(fn)             __define_initcall(fn, 6)
#define device_initcall_sync(fn)        __define_initcall(fn, 6s)
#define late_initcall(fn)               __define_initcall(fn, 7)
#define late_initcall_sync(fn)          __define_initcall(fn, 7s)

#define __initcall(fn) device_initcall(fn)

#define module_init(x)  __initcall(x);

extern int system_initcalls(void);

#endif
