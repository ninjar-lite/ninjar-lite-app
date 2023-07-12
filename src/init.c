#include <stdio.h>
#include <stdbool.h>
#include "linux/init.h"

#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof(arr)[0])
#define DEBUG 0

extern addressable_entry_t __discard_addressable_start[];
extern addressable_entry_t __discard_addressable_end[];

extern initcall_entry_t __initcall_start[];
extern initcall_entry_t __initcall0_start[];
extern initcall_entry_t __initcall1_start[];
extern initcall_entry_t __initcall2_start[];
extern initcall_entry_t __initcall3_start[];
extern initcall_entry_t __initcall4_start[];
extern initcall_entry_t __initcall5_start[];
extern initcall_entry_t __initcall6_start[];
extern initcall_entry_t __initcall7_start[];
extern initcall_entry_t __initcall_end[];

static initcall_entry_t *initcall_levels[] __initdata = {
    __initcall0_start,
    __initcall1_start,
    __initcall2_start,
    __initcall3_start,
    __initcall4_start,
    __initcall5_start,
    __initcall6_start,
    __initcall7_start,
    __initcall_end,
};

#if DEBUG
static const char *initcall_level_names[] __initdata = {
    "pure",
    "core",
    "postcore",
    "arch",
    "subsys",
    "fs",
    "device",
    "late",
};

#endif

static inline void *offset_to_ptr(const int *off)
{
#if DEBUG
    printf("\tfn addr : %p + (%d) = %p\n", (void *)((unsigned long)off),
                                    *off,
                                    (void *)((unsigned long)off + *off));
#endif
    return (void *)((unsigned long)off + *off);
}

static inline initcall_t initcall_from_entry(initcall_entry_t *entry)
{
    return offset_to_ptr(entry);
}

static inline bool initcall_blacklisted(initcall_t fn)
{
    return false;
}

static int do_one_initcall(initcall_t fn)
{
    int ret;

    /* blacklist */
    if (initcall_blacklisted(fn))
        return -1;

    ret = (*fn)();

    return ret;
}

static void do_initcall_level(int level)
{
    initcall_entry_t *fn;

        for (fn = initcall_levels[level]; fn < initcall_levels[level+1]; fn++)
                do_one_initcall(initcall_from_entry(fn));
}

// 99: 0000000000e01140     0 NOTYPE  GLOBAL DEFAULT   28 __initcall6_start
static void __init do_initcalls(void)
{
    int level;

    for (level = 0; level < ARRAY_SIZE(initcall_levels) - 1; level++) {
#if DEBUG	    
        printf("\n%d, %s, %p\n", level, initcall_level_names[level], initcall_levels[level]);
#endif
        do_initcall_level(level);
    }
}

static void __init do_pre_smp_initcalls(void)
{
    initcall_entry_t *fn;
#if DEBUG
    printf("early, %p\n", __initcall_start);
#endif
    for (fn = __initcall_start; fn < __initcall0_start; fn++)
        do_one_initcall(initcall_from_entry(fn));
}

static void __init do_list_addressable_things(void)
{
    addressable_entry_t *fn;

    printf(".discard.addressable start : %p\n", __discard_addressable_start);
    for (fn = __discard_addressable_start; fn < __discard_addressable_end; fn++) {
        printf("pointer addr : %p\n", fn);
        printf("\tfn addr : %p\n", (void *)*fn);
    }
    printf(".discard.addressable   end : %p\n", __discard_addressable_end);
}

static int __init dummy_init(void)
{
	printf("#########################\n");
	printf(" I'm a dummy init call.\n");
	printf("#########################\n");
	return 0;
}
early_initcall(dummy_init);

int system_initcalls(void)
{
	do_pre_smp_initcalls();
	do_initcalls();
	return 0;
}
