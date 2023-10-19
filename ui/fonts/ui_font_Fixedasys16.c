/*******************************************************************************
 * Size: 16 px
 * Bpp: 1
 * Opts: --bpp 1 --size 16 --font E:\repos\ui_project\assets\FixedsysExcelsiorNerdFont-Regular.ttf -o E:\repos\ui_project\assets\ui_font_Fixedasys16.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_FIXEDASYS16
#define UI_FONT_FIXEDASYS16 1
#endif

#if UI_FONT_FIXEDASYS16

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0x6f, 0xff, 0x66, 0x6, 0x60,

    /* U+0022 "\"" */
    0xcf, 0x3c, 0xc0,

    /* U+0023 "#" */
    0x6c, 0xdb, 0xfb, 0x66, 0xcd, 0xbf, 0xb6, 0x6c,

    /* U+0024 "$" */
    0x30, 0xc7, 0xb3, 0xc1, 0x83, 0x6, 0xf, 0x37,
    0x8c, 0x30,

    /* U+0025 "%" */
    0x70, 0xd8, 0xda, 0x76, 0xc, 0x18, 0x30, 0x6e,
    0x5b, 0x1b, 0xe,

    /* U+0026 "&" */
    0x71, 0xb3, 0x63, 0x8c, 0x1b, 0xf3, 0x66, 0x76,

    /* U+0027 "'" */
    0xfc,

    /* U+0028 "(" */
    0x36, 0x6c, 0xcc, 0xcc, 0x66, 0x30,

    /* U+0029 ")" */
    0xc6, 0x63, 0x33, 0x33, 0x66, 0xc0,

    /* U+002A "*" */
    0x6c, 0x73, 0xf9, 0xc6, 0xc0,

    /* U+002B "+" */
    0x30, 0xcf, 0xcc, 0x30,

    /* U+002C "," */
    0xfd, 0xe0,

    /* U+002D "-" */
    0xfc,

    /* U+002E "." */
    0xfc,

    /* U+002F "/" */
    0xc, 0x31, 0x86, 0x30, 0xc6, 0x18, 0xc3, 0x0,

    /* U+0030 "0" */
    0x7b, 0x3d, 0xf7, 0xcf, 0xbe, 0xf3, 0x78,

    /* U+0031 "1" */
    0x19, 0xfe, 0x31, 0x8c, 0x63, 0x18,

    /* U+0032 "2" */
    0x7b, 0x3c, 0xc3, 0x18, 0xc6, 0x30, 0xfc,

    /* U+0033 "3" */
    0x7b, 0x3c, 0xc3, 0x38, 0x3c, 0xf3, 0x78,

    /* U+0034 "4" */
    0x60, 0xc1, 0xb3, 0x66, 0xd9, 0xbf, 0x86, 0xc,

    /* U+0035 "5" */
    0xff, 0xc, 0x30, 0xf8, 0x30, 0xc6, 0xf0,

    /* U+0036 "6" */
    0x38, 0xc6, 0x3e, 0xcf, 0x3c, 0xf3, 0x78,

    /* U+0037 "7" */
    0xfc, 0x31, 0x86, 0x30, 0xc6, 0x18, 0x60,

    /* U+0038 "8" */
    0x7b, 0x3c, 0xfb, 0x7b, 0x7c, 0xf3, 0x78,

    /* U+0039 "9" */
    0x7b, 0x3c, 0xf3, 0xcd, 0xf1, 0x8c, 0x70,

    /* U+003A ":" */
    0xfc, 0x1, 0xf8,

    /* U+003B ";" */
    0xfc, 0x1, 0xfb, 0xc0,

    /* U+003C "<" */
    0xc, 0x63, 0x18, 0xc1, 0x83, 0x6, 0xc,

    /* U+003D "=" */
    0xfc, 0xf, 0xc0,

    /* U+003E ">" */
    0xc1, 0x83, 0x6, 0xc, 0x63, 0x18, 0xc0,

    /* U+003F "?" */
    0x7b, 0x3c, 0xc6, 0x30, 0xc0, 0xc, 0x30,

    /* U+0040 "@" */
    0x7e, 0xc3, 0xc3, 0xcf, 0xdb, 0xdb, 0xcf, 0xc0,
    0x7f,

    /* U+0041 "A" */
    0x31, 0xec, 0xf3, 0xcf, 0xfc, 0xf3, 0xcc,

    /* U+0042 "B" */
    0xfb, 0x3c, 0xf3, 0xfb, 0x3c, 0xf3, 0xf8,

    /* U+0043 "C" */
    0x7b, 0x3c, 0xf0, 0xc3, 0xc, 0xf3, 0x78,

    /* U+0044 "D" */
    0xf3, 0x6c, 0xf3, 0xcf, 0x3c, 0xf6, 0xf0,

    /* U+0045 "E" */
    0xff, 0xc, 0x30, 0xfb, 0xc, 0x30, 0xfc,

    /* U+0046 "F" */
    0xff, 0xc, 0x30, 0xfb, 0xc, 0x30, 0xc0,

    /* U+0047 "G" */
    0x7b, 0x3c, 0xf0, 0xc3, 0x7c, 0xf3, 0x7c,

    /* U+0048 "H" */
    0xcf, 0x3c, 0xf3, 0xff, 0x3c, 0xf3, 0xcc,

    /* U+0049 "I" */
    0xf6, 0x66, 0x66, 0x66, 0xf0,

    /* U+004A "J" */
    0xc, 0x30, 0xc3, 0xc, 0x3c, 0xf3, 0x78,

    /* U+004B "K" */
    0xcf, 0x3d, 0xb6, 0xf3, 0x6d, 0xb3, 0xcc,

    /* U+004C "L" */
    0xc3, 0xc, 0x30, 0xc3, 0xc, 0x30, 0xfc,

    /* U+004D "M" */
    0xc7, 0x8f, 0xbe, 0xbd, 0x7a, 0xf1, 0xe3, 0xc6,

    /* U+004E "N" */
    0xc7, 0x8f, 0x9f, 0xbd, 0xf9, 0xf1, 0xe3, 0xc6,

    /* U+004F "O" */
    0x7b, 0x3c, 0xf3, 0xcf, 0x3c, 0xf3, 0x78,

    /* U+0050 "P" */
    0xfb, 0x3c, 0xf3, 0xfb, 0xc, 0x30, 0xc0,

    /* U+0051 "Q" */
    0x7b, 0x3c, 0xf3, 0xcf, 0x3c, 0xf3, 0x78, 0x60,
    0xc0,

    /* U+0052 "R" */
    0xfb, 0x3c, 0xf3, 0xfb, 0x6c, 0xf3, 0xcc,

    /* U+0053 "S" */
    0x7b, 0x3c, 0x18, 0x30, 0x60, 0xf3, 0x78,

    /* U+0054 "T" */
    0xfc, 0xc3, 0xc, 0x30, 0xc3, 0xc, 0x30,

    /* U+0055 "U" */
    0xcf, 0x3c, 0xf3, 0xcf, 0x3c, 0xf3, 0x78,

    /* U+0056 "V" */
    0xcf, 0x3c, 0xf3, 0xcf, 0x3c, 0xde, 0x30,

    /* U+0057 "W" */
    0xc7, 0x8f, 0x1e, 0xbd, 0x7a, 0xdb, 0x36, 0x6c,

    /* U+0058 "X" */
    0xcf, 0x36, 0x8c, 0x31, 0x6c, 0xf3, 0xcc,

    /* U+0059 "Y" */
    0xcf, 0x3c, 0xf3, 0x78, 0xc3, 0xc, 0x30,

    /* U+005A "Z" */
    0xfc, 0x30, 0xc6, 0x31, 0x8c, 0x30, 0xfc,

    /* U+005B "[" */
    0xfc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcf,

    /* U+005C "\\" */
    0xc3, 0x6, 0x18, 0x30, 0xc1, 0x86, 0xc, 0x30,

    /* U+005D "]" */
    0xf3, 0x33, 0x33, 0x33, 0x33, 0x3f,

    /* U+005E "^" */
    0x31, 0xec, 0xc0,

    /* U+005F "_" */
    0xff,

    /* U+0060 "`" */
    0xe6, 0x30,

    /* U+0061 "a" */
    0x78, 0x30, 0xdf, 0xcf, 0x37, 0xc0,

    /* U+0062 "b" */
    0xc3, 0xf, 0xb3, 0xcf, 0x3c, 0xf3, 0xf8,

    /* U+0063 "c" */
    0x7b, 0x3c, 0x30, 0xc3, 0x37, 0x80,

    /* U+0064 "d" */
    0xc, 0x37, 0xf3, 0xcf, 0x3c, 0xf3, 0x7c,

    /* U+0065 "e" */
    0x7b, 0x3c, 0xff, 0xc3, 0x7, 0x80,

    /* U+0066 "f" */
    0x3d, 0x86, 0x18, 0xfd, 0x86, 0x18, 0x60,

    /* U+0067 "g" */
    0x7f, 0x3c, 0xf3, 0xcf, 0x37, 0xc3, 0xf, 0xe0,

    /* U+0068 "h" */
    0xc3, 0xf, 0xb3, 0xcf, 0x3c, 0xf3, 0xcc,

    /* U+0069 "i" */
    0x30, 0xc0, 0x3c, 0x30, 0xc3, 0xc, 0x33, 0xf0,

    /* U+006A "j" */
    0x18, 0xc0, 0xf1, 0x8c, 0x63, 0x18, 0xc6, 0x3f,
    0x0,

    /* U+006B "k" */
    0xc3, 0xc, 0xf3, 0xdb, 0xcd, 0xb3, 0xcc,

    /* U+006C "l" */
    0xf0, 0xc3, 0xc, 0x30, 0xc3, 0xc, 0xfc,

    /* U+006D "m" */
    0xfd, 0xaf, 0x5e, 0xbd, 0x7a, 0xf1, 0x80,

    /* U+006E "n" */
    0xfb, 0x3c, 0xf3, 0xcf, 0x3c, 0xc0,

    /* U+006F "o" */
    0x7b, 0x3c, 0xf3, 0xcf, 0x37, 0x80,

    /* U+0070 "p" */
    0xfb, 0x3c, 0xf3, 0xcf, 0x3f, 0xb0, 0xc3, 0x0,

    /* U+0071 "q" */
    0x7f, 0x3c, 0xf3, 0xcf, 0x37, 0xc3, 0xc, 0x30,

    /* U+0072 "r" */
    0xcf, 0x7e, 0x30, 0xc3, 0xc, 0x0,

    /* U+0073 "s" */
    0x7f, 0xc, 0x1e, 0xc, 0x3f, 0x80,

    /* U+0074 "t" */
    0x61, 0x8f, 0xd8, 0x61, 0x86, 0x18, 0x3c,

    /* U+0075 "u" */
    0xcf, 0x3c, 0xf3, 0xcf, 0x37, 0xc0,

    /* U+0076 "v" */
    0xcf, 0x3c, 0xf3, 0xcd, 0xe3, 0x0,

    /* U+0077 "w" */
    0xc7, 0xaf, 0x5e, 0xbd, 0x6d, 0x9b, 0x0,

    /* U+0078 "x" */
    0xcf, 0x37, 0x8c, 0x7b, 0x3c, 0xc0,

    /* U+0079 "y" */
    0x66, 0xcd, 0x9b, 0x36, 0x6c, 0xcf, 0x6, 0x19,
    0xe0,

    /* U+007A "z" */
    0xfc, 0x31, 0x8c, 0x63, 0xf, 0xc0,

    /* U+007B "{" */
    0x19, 0x8c, 0x66, 0x61, 0x86, 0x31, 0x86,

    /* U+007C "|" */
    0xff, 0xff, 0xff,

    /* U+007D "}" */
    0xc3, 0x18, 0xc3, 0xc, 0xcc, 0x63, 0x30,

    /* U+007E "~" */
    0x71, 0xdb, 0x8e,

    /* U+007F "" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 128, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 128, .box_w = 4, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 6, .adv_w = 128, .box_w = 6, .box_h = 3, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 9, .adv_w = 128, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 17, .adv_w = 128, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 27, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 38, .adv_w = 128, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 46, .adv_w = 128, .box_w = 2, .box_h = 3, .ofs_x = 3, .ofs_y = 6},
    {.bitmap_index = 47, .adv_w = 128, .box_w = 4, .box_h = 11, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 53, .adv_w = 128, .box_w = 4, .box_h = 11, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 59, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 64, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 68, .adv_w = 128, .box_w = 3, .box_h = 4, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 70, .adv_w = 128, .box_w = 6, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 71, .adv_w = 128, .box_w = 3, .box_h = 2, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 72, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 80, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 87, .adv_w = 128, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 93, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 100, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 107, .adv_w = 128, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 115, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 122, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 129, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 136, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 143, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 150, .adv_w = 128, .box_w = 3, .box_h = 7, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 153, .adv_w = 128, .box_w = 3, .box_h = 9, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 157, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 164, .adv_w = 128, .box_w = 6, .box_h = 3, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 167, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 174, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 181, .adv_w = 128, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 190, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 197, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 204, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 211, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 218, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 225, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 232, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 239, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 246, .adv_w = 128, .box_w = 4, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 251, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 258, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 265, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 272, .adv_w = 128, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 280, .adv_w = 128, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 288, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 295, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 302, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 311, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 318, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 325, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 332, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 339, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 346, .adv_w = 128, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 354, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 361, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 368, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 375, .adv_w = 128, .box_w = 4, .box_h = 12, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 381, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 389, .adv_w = 128, .box_w = 4, .box_h = 12, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 395, .adv_w = 128, .box_w = 6, .box_h = 3, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 398, .adv_w = 128, .box_w = 8, .box_h = 1, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 399, .adv_w = 128, .box_w = 4, .box_h = 3, .ofs_x = 2, .ofs_y = 8},
    {.bitmap_index = 401, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 407, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 414, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 420, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 427, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 433, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 440, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 448, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 455, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 463, .adv_w = 128, .box_w = 5, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 472, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 479, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 486, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 493, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 499, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 505, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 513, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 521, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 527, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 533, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 540, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 546, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 552, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 559, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 565, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 574, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 580, .adv_w = 128, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 587, .adv_w = 128, .box_w = 2, .box_h = 12, .ofs_x = 3, .ofs_y = -3},
    {.bitmap_index = 590, .adv_w = 128, .box_w = 5, .box_h = 11, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 597, .adv_w = 128, .box_w = 8, .box_h = 3, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 600, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 96, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t ui_font_Fixedasys16 = {
#else
lv_font_t ui_font_Fixedasys16 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 14,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_FIXEDASYS16*/

