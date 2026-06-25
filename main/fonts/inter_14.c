/*******************************************************************************
 * Size: 14 px
 * Bpp: 1
 * Opts: --bpp 1 --size 14 --no-compress --stride 1 --align 1 --font Inter-Regular.ttf --range 32-383 --format lvgl -o inter_14.c
 ******************************************************************************/

#ifdef __has_include
    #if __has_include("lvgl.h")
        #ifndef LV_LVGL_H_INCLUDE_SIMPLE
            #define LV_LVGL_H_INCLUDE_SIMPLE
        #endif
    #endif
#endif

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
    #include "lvgl.h"
#else
    #include "lvgl/lvgl.h"
#endif



#ifndef INTER_14
#define INTER_14 1
#endif

#if INTER_14

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xaa, 0xa8, 0x3c,

    /* U+0022 "\"" */
    0xb6, 0xd0,

    /* U+0023 "#" */
    0x13, 0x9, 0x4, 0x8f, 0xf2, 0x21, 0x10, 0x89,
    0xfe, 0x24, 0x12, 0x11, 0x0,

    /* U+0024 "$" */
    0x10, 0xfb, 0x5c, 0x99, 0x1e, 0xf, 0xb, 0x13,
    0x27, 0x5b, 0xe1, 0x2, 0x0,

    /* U+0025 "%" */
    0x60, 0x92, 0x12, 0x44, 0x49, 0x6, 0x20, 0x8,
    0x2, 0x30, 0x49, 0x11, 0x24, 0x25, 0x83, 0x0,

    /* U+0026 "&" */
    0x38, 0x44, 0x44, 0x6c, 0x38, 0x70, 0xda, 0x8e,
    0x86, 0xc6, 0x7a,

    /* U+0027 "'" */
    0xf0,

    /* U+0028 "(" */
    0x69, 0x49, 0x24, 0x91, 0x24,

    /* U+0029 ")" */
    0x49, 0x12, 0x49, 0x25, 0x24,

    /* U+002A "*" */
    0x25, 0x5c, 0xea, 0x90,

    /* U+002B "+" */
    0x10, 0x20, 0x47, 0xf1, 0x2, 0x4, 0x0,

    /* U+002C "," */
    0xea,

    /* U+002D "-" */
    0xf0,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0x8, 0x84, 0x21, 0x10, 0x84, 0x62, 0x10, 0x8c,
    0x0,

    /* U+0030 "0" */
    0x38, 0x8a, 0x1c, 0x18, 0x30, 0x60, 0xc1, 0x86,
    0x88, 0xe0,

    /* U+0031 "1" */
    0x37, 0x91, 0x11, 0x11, 0x11, 0x10,

    /* U+0032 "2" */
    0x7b, 0x38, 0x41, 0xc, 0x21, 0xc, 0x61, 0xf,
    0xc0,

    /* U+0033 "3" */
    0x79, 0x9a, 0x10, 0x20, 0xc7, 0x1, 0x1, 0x83,
    0x8d, 0xe0,

    /* U+0034 "4" */
    0xc, 0x18, 0x70, 0xa2, 0x4c, 0x91, 0x62, 0xfe,
    0x8, 0x10,

    /* U+0035 "5" */
    0xfe, 0x8, 0x20, 0xfa, 0x20, 0x41, 0x87, 0x27,
    0x0,

    /* U+0036 "6" */
    0x3c, 0x89, 0xc, 0xb, 0x98, 0xa0, 0xc1, 0x82,
    0x88, 0xe0,

    /* U+0037 "7" */
    0xfe, 0xc, 0x10, 0x60, 0x83, 0x4, 0x18, 0x20,
    0xc1, 0x0,

    /* U+0038 "8" */
    0x38, 0x89, 0x12, 0x24, 0xc7, 0x11, 0x41, 0x83,
    0x8d, 0xf0,

    /* U+0039 "9" */
    0x38, 0x8a, 0xc, 0x18, 0x28, 0xce, 0x81, 0x84,
    0x88, 0xe0,

    /* U+003A ":" */
    0xf0, 0xf,

    /* U+003B ";" */
    0xf0, 0xe, 0xa0,

    /* U+003C "<" */
    0x2, 0x18, 0xc6, 0xe, 0x7, 0x3, 0x81,

    /* U+003D "=" */
    0xfc, 0x0, 0x3f,

    /* U+003E ">" */
    0x81, 0xc0, 0xe0, 0x70, 0xc6, 0x30, 0x0,

    /* U+003F "?" */
    0x7b, 0x38, 0x41, 0x8, 0xc2, 0x8, 0x0, 0xc3,
    0x0,

    /* U+0040 "@" */
    0x1f, 0x83, 0x4, 0x40, 0x2c, 0xfb, 0x99, 0x99,
    0x9, 0x90, 0x99, 0x9, 0x99, 0x9c, 0xee, 0x40,
    0x3, 0x0, 0x1f, 0x80,

    /* U+0041 "A" */
    0xc, 0x6, 0x5, 0x2, 0xc1, 0x21, 0x90, 0x8c,
    0x7e, 0x61, 0x20, 0xd0, 0x20,

    /* U+0042 "B" */
    0xfd, 0xe, 0xc, 0x18, 0x7f, 0xa1, 0xc1, 0x83,
    0xf, 0xf0,

    /* U+0043 "C" */
    0x3c, 0x63, 0x41, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x41, 0x63, 0x3c,

    /* U+0044 "D" */
    0xfc, 0x86, 0x82, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x82, 0x86, 0xf8,

    /* U+0045 "E" */
    0xfe, 0x8, 0x20, 0x83, 0xf8, 0x20, 0x82, 0xf,
    0xc0,

    /* U+0046 "F" */
    0xfe, 0x8, 0x20, 0x83, 0xe8, 0x20, 0x82, 0x8,
    0x0,

    /* U+0047 "G" */
    0x1e, 0x31, 0x90, 0x70, 0x18, 0x4, 0x2, 0x1f,
    0x1, 0x40, 0xb0, 0x87, 0x80,

    /* U+0048 "H" */
    0x81, 0x81, 0x81, 0x81, 0x81, 0xff, 0x81, 0x81,
    0x81, 0x81, 0x81,

    /* U+0049 "I" */
    0xff, 0xe0,

    /* U+004A "J" */
    0x4, 0x10, 0x41, 0x4, 0x10, 0x61, 0x87, 0x37,
    0x80,

    /* U+004B "K" */
    0x86, 0x8c, 0x88, 0x90, 0xb0, 0xf0, 0xd8, 0x88,
    0x8c, 0x86, 0x82,

    /* U+004C "L" */
    0x82, 0x8, 0x20, 0x82, 0x8, 0x20, 0x82, 0xf,
    0xc0,

    /* U+004D "M" */
    0xc0, 0xf0, 0x3e, 0x1e, 0x85, 0xa1, 0x6c, 0xd9,
    0x26, 0x49, 0x9e, 0x63, 0x18, 0xc4,

    /* U+004E "N" */
    0xc1, 0xc1, 0xe1, 0xb1, 0x91, 0x99, 0x89, 0x8d,
    0x87, 0x83, 0x83,

    /* U+004F "O" */
    0x3e, 0x31, 0x90, 0x50, 0x18, 0xc, 0x6, 0x3,
    0x1, 0x41, 0x31, 0x8f, 0x0,

    /* U+0050 "P" */
    0xfd, 0xe, 0xc, 0x18, 0x30, 0xbe, 0x40, 0x81,
    0x2, 0x0,

    /* U+0051 "Q" */
    0x3e, 0x31, 0x90, 0x50, 0x18, 0xc, 0x6, 0x3,
    0x1, 0x45, 0xb3, 0x87, 0xc0, 0x20,

    /* U+0052 "R" */
    0xfd, 0xa, 0xc, 0x18, 0x30, 0xff, 0x46, 0x85,
    0xe, 0x8,

    /* U+0053 "S" */
    0x39, 0x8e, 0xc, 0xe, 0x7, 0x81, 0x81, 0x83,
    0x8d, 0xf0,

    /* U+0054 "T" */
    0xff, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
    0x10, 0x10, 0x10,

    /* U+0055 "U" */
    0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x81, 0x42, 0x3c,

    /* U+0056 "V" */
    0x40, 0xa0, 0xd8, 0x44, 0x22, 0x31, 0x90, 0x48,
    0x2c, 0x14, 0x6, 0x3, 0x0,

    /* U+0057 "W" */
    0xc3, 0xa, 0x18, 0x50, 0xc6, 0xce, 0x36, 0x49,
    0x12, 0x48, 0x92, 0x45, 0x96, 0x38, 0x60, 0xc3,
    0x6, 0x18,

    /* U+0058 "X" */
    0x41, 0x90, 0x8c, 0x82, 0xc1, 0xc0, 0x60, 0x70,
    0x2c, 0x23, 0x30, 0x90, 0x60,

    /* U+0059 "Y" */
    0x41, 0x31, 0x88, 0x86, 0xc1, 0x40, 0xe0, 0x20,
    0x10, 0x8, 0x4, 0x2, 0x0,

    /* U+005A "Z" */
    0xfe, 0xc, 0x10, 0x41, 0x82, 0xc, 0x10, 0x41,
    0x83, 0xf8,

    /* U+005B "[" */
    0xf2, 0x49, 0x24, 0x92, 0x4e,

    /* U+005C "\\" */
    0x82, 0x10, 0x86, 0x10, 0x84, 0x30, 0x84, 0x21,
    0x80,

    /* U+005D "]" */
    0xe4, 0x92, 0x49, 0x24, 0x9e,

    /* U+005E "^" */
    0x23, 0x15, 0x28, 0x80,

    /* U+005F "_" */
    0xfc,

    /* U+0060 "`" */
    0xd0,

    /* U+0061 "a" */
    0x7b, 0x10, 0x4f, 0xc6, 0x18, 0xdd,

    /* U+0062 "b" */
    0x81, 0x2, 0x5, 0xcc, 0x50, 0x60, 0xc1, 0x83,
    0x8a, 0xe0,

    /* U+0063 "c" */
    0x39, 0x18, 0x20, 0x82, 0x4, 0x4e,

    /* U+0064 "d" */
    0x2, 0x4, 0x9, 0xd4, 0x70, 0x60, 0xc1, 0x82,
    0x8c, 0xe8,

    /* U+0065 "e" */
    0x3c, 0x8e, 0x1f, 0xf8, 0x10, 0x11, 0x9e,

    /* U+0066 "f" */
    0x19, 0x9, 0xf2, 0x10, 0x84, 0x21, 0x8,

    /* U+0067 "g" */
    0x3a, 0x8e, 0xc, 0x18, 0x30, 0x51, 0x9d, 0x3,
    0x8d, 0xf0,

    /* U+0068 "h" */
    0x82, 0x8, 0x2e, 0xce, 0x18, 0x61, 0x86, 0x18,
    0x40,

    /* U+0069 "i" */
    0x9f, 0xe0,

    /* U+006A "j" */
    0x41, 0x55, 0x55, 0x60,

    /* U+006B "k" */
    0x82, 0x8, 0x22, 0x9a, 0xce, 0x3c, 0x92, 0x68,
    0xc0,

    /* U+006C "l" */
    0xff, 0xe0,

    /* U+006D "m" */
    0xb9, 0xd8, 0xc6, 0x10, 0xc2, 0x18, 0x43, 0x8,
    0x61, 0xc, 0x21,

    /* U+006E "n" */
    0xbb, 0x38, 0x61, 0x86, 0x18, 0x61,

    /* U+006F "o" */
    0x38, 0x8a, 0xc, 0x18, 0x30, 0x51, 0x1c,

    /* U+0070 "p" */
    0xb9, 0x8a, 0xc, 0x18, 0x30, 0x71, 0x5c, 0x81,
    0x2, 0x0,

    /* U+0071 "q" */
    0x3a, 0x8e, 0xc, 0x18, 0x30, 0x51, 0x9d, 0x2,
    0x4, 0x8,

    /* U+0072 "r" */
    0xbc, 0x88, 0x88, 0x88,

    /* U+0073 "s" */
    0x7a, 0x38, 0x3c, 0x1c, 0x18, 0x5e,

    /* U+0074 "t" */
    0x44, 0xf4, 0x44, 0x44, 0x43,

    /* U+0075 "u" */
    0x86, 0x18, 0x61, 0x86, 0x1c, 0xdd,

    /* U+0076 "v" */
    0x42, 0x42, 0x66, 0x24, 0x24, 0x3c, 0x18, 0x18,

    /* U+0077 "w" */
    0x46, 0x28, 0xcd, 0x29, 0x35, 0x22, 0xbc, 0x53,
    0xc, 0x60, 0x8c,

    /* U+0078 "x" */
    0x46, 0x48, 0xe0, 0xc1, 0x85, 0x99, 0x23,

    /* U+0079 "y" */
    0x42, 0x42, 0x66, 0x24, 0x24, 0x38, 0x18, 0x18,
    0x10, 0x10, 0x60,

    /* U+007A "z" */
    0xfc, 0x31, 0x84, 0x21, 0x8c, 0x3f,

    /* U+007B "{" */
    0x19, 0x8, 0x42, 0x13, 0x4, 0x21, 0x8, 0x41,
    0x80,

    /* U+007C "|" */
    0xff, 0xff, 0xc0,

    /* U+007D "}" */
    0xc1, 0x8, 0x42, 0x10, 0x64, 0x21, 0x8, 0x4c,
    0x0,

    /* U+007E "~" */
    0x63, 0x26, 0x30,

    /* U+00A0 " " */
    0x0,

    /* U+00A1 "¡" */
    0xf0, 0xaa, 0xa8,

    /* U+00A2 "¢" */
    0x10, 0x71, 0xf6, 0xb9, 0x12, 0x24, 0x6b, 0x7c,
    0x70, 0x40,

    /* U+00A3 "£" */
    0x3c, 0xc5, 0xa, 0x4, 0x1f, 0x90, 0x20, 0x40,
    0x87, 0xf8,

    /* U+00A4 "¤" */
    0xbd, 0x42, 0xc3, 0x81, 0x81, 0x81, 0xc3, 0xc3,
    0xbd,

    /* U+00A5 "¥" */
    0xc6, 0x89, 0x13, 0x62, 0x85, 0x1f, 0x8, 0x7c,
    0x20, 0x40,

    /* U+00A6 "¦" */
    0xf8, 0xf8,

    /* U+00A7 "§" */
    0x39, 0x14, 0x18, 0x72, 0x68, 0x51, 0x3c, 0x20,
    0x51, 0x78,

    /* U+00A8 "¨" */
    0x90,

    /* U+00A9 "©" */
    0x1e, 0x8, 0x44, 0xa, 0x79, 0xb2, 0x68, 0x1a,
    0x6, 0xc9, 0x5e, 0x88, 0x41, 0xe0,

    /* U+00AA "ª" */
    0x74, 0x4f, 0x98, 0xbc,

    /* U+00AB "«" */
    0x24, 0x93, 0x46, 0x84, 0x84, 0x80,

    /* U+00AC "¬" */
    0xfc, 0x10, 0x40,

    /* U+00AE "®" */
    0x3c, 0x42, 0xb9, 0xa9, 0xb9, 0xa9, 0x42, 0x3c,

    /* U+00AF "¯" */
    0xf0,

    /* U+00B0 "°" */
    0x74, 0x63, 0x17, 0x0,

    /* U+00B1 "±" */
    0x10, 0x4f, 0xc4, 0x10, 0xf, 0xc0,

    /* U+00B2 "²" */
    0x69, 0x12, 0x4f,

    /* U+00B3 "³" */
    0x70, 0x4c, 0x1c, 0xb8,

    /* U+00B4 "´" */
    0x70,

    /* U+00B5 "µ" */
    0x85, 0xa, 0x14, 0x28, 0x50, 0xb3, 0x7f, 0x81,
    0x2, 0x0,

    /* U+00B6 "¶" */
    0x7f, 0xdf, 0x7d, 0xf5, 0xd3, 0x41, 0x4, 0x10,
    0x40,

    /* U+00B7 "·" */
    0xf0,

    /* U+00B8 "¸" */
    0x9c,

    /* U+00B9 "¹" */
    0x74, 0x92, 0x40,

    /* U+00BA "º" */
    0x7b, 0x38, 0x61, 0xcd, 0xe0,

    /* U+00BB "»" */
    0x91, 0x22, 0x49, 0x4a, 0x40,

    /* U+00BC "¼" */
    0x60, 0x94, 0x20, 0x84, 0x11, 0x2, 0x4c, 0x19,
    0x82, 0x50, 0x8a, 0x33, 0xe4, 0x8,

    /* U+00BD "½" */
    0x60, 0x94, 0x20, 0x8c, 0x11, 0x2, 0x4e, 0x1a,
    0x42, 0x8, 0x82, 0x30, 0x84, 0x3c,

    /* U+00BE "¾" */
    0x60, 0x92, 0x30, 0x44, 0x31, 0x1, 0x21, 0xe9,
    0x83, 0x30, 0x4a, 0x11, 0x42, 0x3c, 0x81, 0x0,

    /* U+00BF "¿" */
    0x30, 0xc0, 0x4, 0x10, 0xc4, 0x20, 0x87, 0x37,
    0x80,

    /* U+00C0 "À" */
    0x18, 0x4, 0x0, 0x1, 0x80, 0xc0, 0xa0, 0x58,
    0x24, 0x32, 0x11, 0x8f, 0xcc, 0x24, 0x1a, 0x4,

    /* U+00C1 "Á" */
    0x6, 0x2, 0x2, 0x1, 0x80, 0xc0, 0xa0, 0x58,
    0x24, 0x32, 0x11, 0x8f, 0xcc, 0x24, 0x1a, 0x4,

    /* U+00C2 "Â" */
    0x8, 0xe, 0x4, 0x81, 0x80, 0xc0, 0xa0, 0x58,
    0x24, 0x32, 0x11, 0x8f, 0xcc, 0x24, 0x1a, 0x4,

    /* U+00C3 "Ã" */
    0x3c, 0x0, 0x6, 0x3, 0x3, 0xc1, 0x20, 0x90,
    0xcc, 0x42, 0x3f, 0x30, 0xd0, 0x28, 0x10,

    /* U+00C4 "Ä" */
    0x24, 0x0, 0x18, 0x38, 0x3c, 0x24, 0x24, 0x66,
    0x46, 0x7e, 0xc3, 0xc3, 0x81,

    /* U+00C5 "Å" */
    0x1c, 0x4, 0x80, 0xc0, 0x30, 0xc, 0x7, 0x81,
    0x20, 0x48, 0x33, 0x8, 0x43, 0xf1, 0x86, 0x40,
    0xb0, 0x20,

    /* U+00C6 "Æ" */
    0xf, 0xf0, 0xa0, 0x1a, 0x1, 0x20, 0x32, 0x2,
    0x3f, 0x22, 0x7, 0xe0, 0x42, 0xc, 0x20, 0x83,
    0xf0,

    /* U+00C7 "Ç" */
    0x3c, 0x63, 0x41, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x41, 0x63, 0x3e, 0x8, 0x4, 0xc,

    /* U+00C8 "È" */
    0x60, 0x80, 0x3f, 0x82, 0x8, 0x20, 0xfe, 0x8,
    0x20, 0x83, 0xf0,

    /* U+00C9 "É" */
    0x18, 0x42, 0x3f, 0x82, 0x8, 0x20, 0xfe, 0x8,
    0x20, 0x83, 0xf0,

    /* U+00CA "Ê" */
    0x21, 0xc4, 0xbf, 0x82, 0x8, 0x20, 0xfe, 0x8,
    0x20, 0x83, 0xf0,

    /* U+00CB "Ë" */
    0x48, 0xf, 0xe0, 0x82, 0x8, 0x3e, 0x82, 0x8,
    0x20, 0xfc,

    /* U+00CC "Ì" */
    0x91, 0x55, 0x55, 0x50,

    /* U+00CD "Í" */
    0x7a, 0xaa, 0xaa, 0xa0,

    /* U+00CE "Î" */
    0x22, 0xb6, 0x42, 0x10, 0x84, 0x21, 0x8, 0x42,
    0x10,

    /* U+00CF "Ï" */
    0xd0, 0x22, 0x22, 0x22, 0x22, 0x22, 0x20,

    /* U+00D0 "Ð" */
    0x7e, 0x21, 0x90, 0x48, 0x14, 0xf, 0xc5, 0x2,
    0x81, 0x41, 0x21, 0x9f, 0x0,

    /* U+00D1 "Ñ" */
    0x3c, 0x0, 0xc1, 0xc1, 0xe1, 0xb1, 0x91, 0x99,
    0x89, 0x8d, 0x87, 0x83, 0x83,

    /* U+00D2 "Ò" */
    0x10, 0x4, 0x0, 0x7, 0xc6, 0x32, 0xa, 0x3,
    0x1, 0x80, 0xc0, 0x60, 0x28, 0x26, 0x31, 0xe0,

    /* U+00D3 "Ó" */
    0x4, 0x6, 0x2, 0x7, 0xc6, 0x32, 0xa, 0x3,
    0x1, 0x80, 0xc0, 0x60, 0x28, 0x26, 0x31, 0xe0,

    /* U+00D4 "Ô" */
    0x1c, 0xa, 0x0, 0x7, 0xc6, 0x32, 0xa, 0x3,
    0x1, 0x80, 0xc0, 0x60, 0x28, 0x26, 0x31, 0xe0,

    /* U+00D5 "Õ" */
    0x1a, 0x16, 0x0, 0x7, 0xc6, 0x32, 0xa, 0x3,
    0x1, 0x80, 0xc0, 0x60, 0x28, 0x26, 0x31, 0xe0,

    /* U+00D6 "Ö" */
    0x14, 0x0, 0xf, 0x8c, 0x64, 0x14, 0x6, 0x3,
    0x1, 0x80, 0xc0, 0x50, 0x4c, 0x63, 0xc0,

    /* U+00D7 "×" */
    0x46, 0x58, 0xe1, 0xc6, 0xc8, 0xc0,

    /* U+00D8 "Ø" */
    0x3f, 0xb1, 0x90, 0xd0, 0xd8, 0x4c, 0x46, 0x63,
    0x21, 0x61, 0x31, 0x9f, 0x0,

    /* U+00D9 "Ù" */
    0x30, 0x10, 0x0, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x81, 0x81, 0x81, 0x81, 0x42, 0x3c,

    /* U+00DA "Ú" */
    0xc, 0x8, 0x18, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x81, 0x81, 0x81, 0x81, 0x42, 0x3c,

    /* U+00DB "Û" */
    0x18, 0x24, 0x0, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x81, 0x81, 0x81, 0x81, 0x42, 0x3c,

    /* U+00DC "Ü" */
    0x24, 0x0, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x81, 0x81, 0x81, 0x42, 0x3c,

    /* U+00DD "Ý" */
    0x4, 0x6, 0x2, 0x8, 0x26, 0x31, 0x10, 0xd8,
    0x28, 0x1c, 0x4, 0x2, 0x1, 0x0, 0x80, 0x40,

    /* U+00DE "Þ" */
    0x81, 0x2, 0x7, 0xc8, 0x70, 0x60, 0xc3, 0xf9,
    0x2, 0x0,

    /* U+00DF "ß" */
    0x7b, 0x38, 0x61, 0x8e, 0xe8, 0xe1, 0x86, 0x3b,
    0x80,

    /* U+00E0 "à" */
    0x20, 0x80, 0x1e, 0xc4, 0x13, 0xf1, 0x86, 0x37,
    0x40,

    /* U+00E1 "á" */
    0x18, 0x40, 0x1e, 0xc4, 0x13, 0xf1, 0x86, 0x37,
    0x40,

    /* U+00E2 "â" */
    0x31, 0x20, 0x1e, 0xc4, 0x13, 0xf1, 0x86, 0x37,
    0x40,

    /* U+00E3 "ã" */
    0x69, 0x60, 0x1e, 0xc4, 0x13, 0xf1, 0x86, 0x37,
    0x40,

    /* U+00E4 "ä" */
    0x48, 0x0, 0x1e, 0xc4, 0x13, 0xf1, 0x86, 0x37,
    0x40,

    /* U+00E5 "å" */
    0x31, 0x23, 0x0, 0x7b, 0x10, 0x4f, 0xc6, 0x18,
    0xdd,

    /* U+00E6 "æ" */
    0x7b, 0xd8, 0xcc, 0x10, 0xbf, 0xfc, 0x41, 0x8,
    0x23, 0x9b, 0xde,

    /* U+00E7 "ç" */
    0x39, 0x18, 0x20, 0x82, 0x4, 0x4e, 0x10, 0x21,
    0x80,

    /* U+00E8 "è" */
    0x20, 0x60, 0x1, 0xe4, 0x70, 0xff, 0xc0, 0x80,
    0x8c, 0xf0,

    /* U+00E9 "é" */
    0x8, 0x20, 0x1, 0xe4, 0x70, 0xff, 0xc0, 0x80,
    0x8c, 0xf0,

    /* U+00EA "ê" */
    0x30, 0xd0, 0x1, 0xe4, 0x70, 0xff, 0xc0, 0x80,
    0x8c, 0xf0,

    /* U+00EB "ë" */
    0x48, 0x0, 0x1, 0xe4, 0xf0, 0xff, 0xc0, 0x80,
    0x9c, 0xf0,

    /* U+00EC "ì" */
    0x91, 0x55, 0x54,

    /* U+00ED "í" */
    0x62, 0xaa, 0xa8,

    /* U+00EE "î" */
    0x22, 0x80, 0x42, 0x10, 0x84, 0x21, 0x8,

    /* U+00EF "ï" */
    0x90, 0x2, 0x22, 0x22, 0x22, 0x20,

    /* U+00F0 "ð" */
    0x20, 0x78, 0xe0, 0x23, 0xc8, 0xe0, 0xc1, 0x83,
    0x5, 0x11, 0xc0,

    /* U+00F1 "ñ" */
    0x69, 0x60, 0x2e, 0xce, 0x18, 0x61, 0x86, 0x18,
    0x40,

    /* U+00F2 "ò" */
    0x20, 0x20, 0x1, 0xc4, 0x50, 0x60, 0xc1, 0x82,
    0x88, 0xe0,

    /* U+00F3 "ó" */
    0x8, 0x20, 0x1, 0xc4, 0x50, 0x60, 0xc1, 0x82,
    0x88, 0xe0,

    /* U+00F4 "ô" */
    0x38, 0xd0, 0x1, 0xc4, 0x50, 0x60, 0xc1, 0x82,
    0x88, 0xe0,

    /* U+00F5 "õ" */
    0x34, 0xb0, 0x1, 0xc4, 0x50, 0x60, 0xc1, 0x82,
    0x88, 0xe0,

    /* U+00F6 "ö" */
    0x28, 0x0, 0x1, 0xc6, 0x58, 0x70, 0xe1, 0xc2,
    0xc8, 0xe0,

    /* U+00F7 "÷" */
    0x30, 0xc0, 0x3f, 0x0, 0xc3, 0x0,

    /* U+00F8 "ø" */
    0x3a, 0x8a, 0x3c, 0xd9, 0x34, 0x51, 0x5c,

    /* U+00F9 "ù" */
    0x60, 0x80, 0x21, 0x86, 0x18, 0x61, 0x87, 0x37,
    0x40,

    /* U+00FA "ú" */
    0x18, 0x40, 0x21, 0x86, 0x18, 0x61, 0x87, 0x37,
    0x40,

    /* U+00FB "û" */
    0x31, 0x20, 0x21, 0x86, 0x18, 0x61, 0x87, 0x37,
    0x40,

    /* U+00FC "ü" */
    0x48, 0x0, 0x21, 0x86, 0x18, 0x61, 0x87, 0x37,
    0x40,

    /* U+00FD "ý" */
    0x8, 0x8, 0x0, 0x42, 0x42, 0x66, 0x24, 0x24,
    0x38, 0x18, 0x18, 0x10, 0x10, 0x60,

    /* U+00FE "þ" */
    0x81, 0x2, 0x5, 0xcc, 0x50, 0x60, 0xc1, 0x83,
    0x8a, 0xe4, 0x8, 0x10, 0x0,

    /* U+00FF "ÿ" */
    0x48, 0x0, 0x21, 0x8f, 0x24, 0x92, 0x70, 0xc3,
    0x8, 0x63, 0x0,

    /* U+0100 "Ā" */
    0x1e, 0x0, 0x0, 0xc0, 0x30, 0x1e, 0x4, 0x81,
    0x20, 0xcc, 0x21, 0xf, 0xc6, 0x19, 0x2, 0x40,
    0x80,

    /* U+0101 "ā" */
    0x78, 0x0, 0x1e, 0xc4, 0x13, 0xf1, 0x86, 0x37,
    0x40,

    /* U+0102 "Ă" */
    0x24, 0x18, 0x0, 0x18, 0x18, 0x3c, 0x24, 0x24,
    0x66, 0x42, 0x7e, 0xc3, 0x81, 0x81,

    /* U+0103 "ă" */
    0x48, 0xc0, 0x1e, 0xc4, 0x13, 0xf1, 0x86, 0x37,
    0x40,

    /* U+0104 "Ą" */
    0xc, 0x3, 0x1, 0xc0, 0x48, 0x12, 0xc, 0x82,
    0x30, 0xfc, 0x61, 0x10, 0x64, 0x8, 0x6, 0x1,
    0x0, 0x70,

    /* U+0105 "ą" */
    0x7b, 0x10, 0x4f, 0xc6, 0x18, 0xdd, 0x8, 0x20,
    0xc0,

    /* U+0106 "Ć" */
    0xc, 0x8, 0x8, 0x3c, 0x63, 0x41, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x41, 0x63, 0x3c,

    /* U+0107 "ć" */
    0x18, 0x40, 0xe, 0x46, 0x8, 0x20, 0x81, 0x13,
    0x80,

    /* U+0108 "Ĉ" */
    0x18, 0x34, 0x0, 0x3c, 0x63, 0x41, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x41, 0x63, 0x3c,

    /* U+0109 "ĉ" */
    0x31, 0xa0, 0xe, 0x46, 0x8, 0x20, 0x81, 0x13,
    0x80,

    /* U+010A "Ċ" */
    0x8, 0x0, 0x3c, 0x62, 0x41, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x41, 0x62, 0x3c,

    /* U+010B "ċ" */
    0x10, 0x0, 0xe, 0x4e, 0x8, 0x20, 0x81, 0x33,
    0x80,

    /* U+010C "Č" */
    0x34, 0x18, 0x0, 0x3c, 0x63, 0x41, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x41, 0x63, 0x3c,

    /* U+010D "č" */
    0x68, 0xc0, 0xe, 0x46, 0x8, 0x20, 0x81, 0x13,
    0x80,

    /* U+010E "Ď" */
    0x48, 0x70, 0x30, 0xfc, 0x86, 0x82, 0x81, 0x81,
    0x81, 0x81, 0x81, 0x82, 0x86, 0xf8,

    /* U+010F "ď" */
    0x3, 0x81, 0x80, 0x87, 0x44, 0x64, 0x12, 0x9,
    0x4, 0x82, 0x23, 0xe, 0x80,

    /* U+0110 "Đ" */
    0x7e, 0x21, 0x90, 0x48, 0x14, 0xf, 0xc5, 0x2,
    0x81, 0x41, 0x21, 0x9f, 0x0,

    /* U+0111 "đ" */
    0x2, 0x1f, 0x2, 0x3a, 0x46, 0x82, 0x82, 0x82,
    0x82, 0x46, 0x3a,

    /* U+0112 "Ē" */
    0x78, 0xf, 0xe0, 0x82, 0x8, 0x3f, 0x82, 0x8,
    0x20, 0xfc,

    /* U+0113 "ē" */
    0x78, 0x0, 0x1, 0xe4, 0x70, 0xff, 0xc0, 0x80,
    0x8c, 0xf0,

    /* U+0114 "Ĕ" */
    0x48, 0xe0, 0x3f, 0x82, 0x8, 0x20, 0xfe, 0x8,
    0x20, 0x83, 0xf0,

    /* U+0115 "ĕ" */
    0x28, 0x70, 0x1, 0xe4, 0x70, 0xff, 0xc0, 0x80,
    0x8c, 0xf0,

    /* U+0116 "Ė" */
    0x10, 0xf, 0xe0, 0x82, 0x8, 0x3f, 0x82, 0x8,
    0x20, 0xfc,

    /* U+0117 "ė" */
    0x10, 0x0, 0x1, 0xe4, 0x70, 0xff, 0xc0, 0x80,
    0x8c, 0xf0,

    /* U+0118 "Ę" */
    0xfd, 0x2, 0x4, 0x8, 0x1f, 0xa0, 0x40, 0x81,
    0x3, 0xf0, 0x60, 0x81, 0xc0,

    /* U+0119 "ę" */
    0x3c, 0x8e, 0x1f, 0xf8, 0x10, 0x11, 0x9e, 0x8,
    0x10, 0x38,

    /* U+011A "Ě" */
    0x49, 0xc2, 0x3f, 0x82, 0x8, 0x20, 0xfe, 0x8,
    0x20, 0x83, 0xf0,

    /* U+011B "ě" */
    0x68, 0x60, 0x1, 0xe4, 0x70, 0xff, 0xc0, 0x80,
    0x8c, 0xf0,

    /* U+011C "Ĝ" */
    0x1c, 0xb, 0x0, 0x3, 0xc6, 0x32, 0xe, 0x3,
    0x0, 0x80, 0x43, 0xe0, 0x28, 0x16, 0x10, 0xf0,

    /* U+011D "ĝ" */
    0x38, 0xd8, 0x1, 0xd4, 0x70, 0x60, 0xc1, 0x82,
    0x8c, 0xe8, 0x1c, 0x6f, 0x80,

    /* U+011E "Ğ" */
    0x32, 0xe, 0x0, 0x3, 0xc6, 0x32, 0xe, 0x3,
    0x0, 0x80, 0x43, 0xe0, 0x28, 0x16, 0x10, 0xf0,

    /* U+011F "ğ" */
    0x44, 0x70, 0x1, 0xd4, 0x70, 0x60, 0xc1, 0x82,
    0x8c, 0xe8, 0x1c, 0x6f, 0x80,

    /* U+0120 "Ġ" */
    0x8, 0x0, 0x7, 0x8c, 0x64, 0x1c, 0x6, 0x1,
    0x0, 0x87, 0xc0, 0x50, 0x2c, 0x21, 0xe0,

    /* U+0121 "ġ" */
    0x10, 0x0, 0x1, 0xd4, 0x70, 0x60, 0xc1, 0x82,
    0x8c, 0xe8, 0x1c, 0x6f, 0x80,

    /* U+0122 "Ģ" */
    0x1e, 0x31, 0x90, 0x70, 0x18, 0x4, 0x2, 0x1f,
    0x1, 0x40, 0xb0, 0x87, 0x80, 0x0, 0x80, 0xc0,

    /* U+0123 "ģ" */
    0x18, 0x20, 0x40, 0x3, 0xa8, 0xe0, 0xc1, 0x83,
    0x5, 0x19, 0xd0, 0x38, 0xdf, 0x0,

    /* U+0124 "Ĥ" */
    0x18, 0x3c, 0x24, 0x81, 0x81, 0x81, 0x81, 0x81,
    0xff, 0x81, 0x81, 0x81, 0x81, 0x81,

    /* U+0125 "ĥ" */
    0x20, 0x50, 0xd8, 0x20, 0x20, 0x20, 0x2e, 0x33,
    0x21, 0x21, 0x21, 0x21, 0x21, 0x21,

    /* U+0126 "Ħ" */
    0x40, 0x90, 0x24, 0xb, 0xff, 0x40, 0x9f, 0xe4,
    0x9, 0x2, 0x40, 0x90, 0x24, 0x8,

    /* U+0127 "ħ" */
    0x41, 0xe1, 0x2, 0xe6, 0x68, 0x50, 0xa1, 0x42,
    0x85, 0x8,

    /* U+0128 "Ĩ" */
    0x70, 0x8, 0x42, 0x10, 0x84, 0x21, 0x8, 0x42,
    0x0,

    /* U+0129 "ĩ" */
    0x73, 0x80, 0x42, 0x10, 0x84, 0x21, 0x8,

    /* U+012A "Ī" */
    0xf0, 0x44, 0x44, 0x44, 0x44, 0x44, 0x40,

    /* U+012B "ī" */
    0xf0, 0x4, 0x44, 0x44, 0x44, 0x40,

    /* U+012C "Ĭ" */
    0xdb, 0x80, 0x42, 0x10, 0x84, 0x21, 0x8, 0x42,
    0x10,

    /* U+012D "ĭ" */
    0x53, 0x80, 0x42, 0x10, 0x84, 0x21, 0x8,

    /* U+012E "Į" */
    0x55, 0x55, 0x56, 0xb0,

    /* U+012F "į" */
    0x41, 0x55, 0x56, 0xb0,

    /* U+0130 "İ" */
    0xbf, 0xf8,

    /* U+0131 "ı" */
    0xff,

    /* U+0132 "Ĳ" */
    0x80, 0xc0, 0x60, 0x30, 0x18, 0xc, 0x6, 0x3,
    0x21, 0x90, 0xcc, 0xe3, 0xc0,

    /* U+0133 "ĳ" */
    0x88, 0x1, 0x18, 0xc6, 0x31, 0x8c, 0x62, 0x10,
    0x98,

    /* U+0134 "Ĵ" */
    0x4, 0xa, 0x0, 0x4, 0x4, 0x4, 0x4, 0x4,
    0x4, 0x4, 0x84, 0x84, 0xcc, 0x78,

    /* U+0135 "ĵ" */
    0x4a, 0x4, 0x44, 0x44, 0x44, 0x44, 0x48,

    /* U+0136 "Ķ" */
    0x86, 0x8c, 0x88, 0x90, 0xb0, 0xf0, 0xd8, 0x88,
    0x8c, 0x86, 0x82, 0x0, 0x10, 0x20,

    /* U+0137 "ķ" */
    0x82, 0x8, 0x22, 0x9a, 0xce, 0x3c, 0x92, 0x68,
    0xc0, 0x20, 0x80,

    /* U+0138 "ĸ" */
    0x8e, 0x69, 0x28, 0xe2, 0x89, 0x22,

    /* U+0139 "Ĺ" */
    0x43, 0x8, 0x20, 0x82, 0x8, 0x20, 0x82, 0x8,
    0x20, 0x83, 0xf0,

    /* U+013A "ĺ" */
    0x7a, 0xaa, 0xaa, 0xa0,

    /* U+013B "Ļ" */
    0x82, 0x8, 0x20, 0x82, 0x8, 0x20, 0x82, 0xf,
    0xc0, 0x20, 0x80,

    /* U+013C "ļ" */
    0x55, 0x55, 0x54, 0x60,

    /* U+013D "Ľ" */
    0x92, 0x48, 0x20, 0x82, 0x8, 0x20, 0x82, 0xf,
    0xc0,

    /* U+013E "ľ" */
    0xb6, 0x49, 0x24, 0x92, 0x0,

    /* U+013F "Ŀ" */
    0x82, 0x8, 0x20, 0x92, 0x8, 0x20, 0x82, 0xf,
    0xc0,

    /* U+0140 "ŀ" */
    0x88, 0x88, 0x8b, 0xb8, 0x88, 0x80,

    /* U+0141 "Ł" */
    0x20, 0x20, 0x20, 0x24, 0x38, 0x70, 0xe0, 0x20,
    0x20, 0x20, 0x3f,

    /* U+0142 "ł" */
    0x49, 0x3d, 0x92, 0x49, 0x0,

    /* U+0143 "Ń" */
    0xc, 0x8, 0x18, 0xc1, 0xc1, 0xe1, 0xb1, 0x91,
    0x99, 0x89, 0x8d, 0x87, 0x83, 0x83,

    /* U+0144 "ń" */
    0x18, 0x40, 0x2e, 0xce, 0x18, 0x61, 0x86, 0x18,
    0x40,

    /* U+0145 "Ņ" */
    0xc1, 0xc1, 0xe1, 0xb1, 0x91, 0x99, 0x89, 0x8d,
    0x87, 0x83, 0x83, 0x0, 0x10, 0x10,

    /* U+0146 "ņ" */
    0xbb, 0x38, 0x61, 0x86, 0x18, 0x61, 0x0, 0x82,
    0x0,

    /* U+0147 "Ň" */
    0x24, 0x1c, 0x18, 0xc1, 0xc1, 0xe1, 0xb1, 0x91,
    0x99, 0x89, 0x8d, 0x87, 0x83, 0x83,

    /* U+0148 "ň" */
    0x48, 0xc0, 0x2e, 0xce, 0x18, 0x61, 0x86, 0x18,
    0x40,

    /* U+014A "Ŋ" */
    0xc1, 0xc1, 0xe1, 0xb1, 0x91, 0x99, 0x89, 0x8d,
    0x87, 0x83, 0x83, 0x1, 0x1, 0x7,

    /* U+014B "ŋ" */
    0xbb, 0x38, 0x61, 0x86, 0x18, 0x61, 0x4, 0x11,
    0xc0,

    /* U+014C "Ō" */
    0x1e, 0x0, 0xf, 0x8c, 0x64, 0x14, 0x6, 0x3,
    0x1, 0x80, 0xc0, 0x50, 0x4c, 0x63, 0xc0,

    /* U+014D "ō" */
    0x78, 0x0, 0x1, 0xc4, 0x50, 0x60, 0xc1, 0x82,
    0x88, 0xe0,

    /* U+014E "Ŏ" */
    0x36, 0xe, 0x0, 0x7, 0xc6, 0x32, 0xa, 0x3,
    0x1, 0x80, 0xc0, 0x60, 0x28, 0x26, 0x31, 0xe0,

    /* U+014F "ŏ" */
    0x44, 0x70, 0x1, 0xc4, 0x50, 0x60, 0xc1, 0x82,
    0x88, 0xe0,

    /* U+0150 "Ő" */
    0x16, 0x1a, 0x0, 0x7, 0xc6, 0x32, 0xa, 0x3,
    0x1, 0x80, 0xc0, 0x60, 0x28, 0x26, 0x31, 0xe0,

    /* U+0151 "ő" */
    0x24, 0xd0, 0x1, 0xc4, 0x50, 0x60, 0xc1, 0x82,
    0x88, 0xe0,

    /* U+0152 "Œ" */
    0x1f, 0xfb, 0x10, 0x10, 0x81, 0x4, 0x8, 0x20,
    0x41, 0xfa, 0x8, 0x10, 0x40, 0x42, 0x3, 0x10,
    0x7, 0xfe,

    /* U+0153 "œ" */
    0x38, 0xe2, 0x28, 0xa0, 0x85, 0x7, 0xe8, 0x20,
    0x41, 0x1, 0x14, 0x47, 0x1c,

    /* U+0154 "Ŕ" */
    0x8, 0x30, 0x47, 0xe8, 0x50, 0x60, 0xc1, 0x87,
    0xfa, 0x34, 0x28, 0x70, 0x40,

    /* U+0155 "ŕ" */
    0x24, 0xb, 0xc8, 0x88, 0x88, 0x80,

    /* U+0156 "Ŗ" */
    0xfd, 0xa, 0xc, 0x18, 0x30, 0xff, 0x46, 0x85,
    0xe, 0x8, 0x3, 0x4, 0x0,

    /* U+0157 "ŗ" */
    0x5b, 0x10, 0x84, 0x21, 0x8, 0x2, 0x20,

    /* U+0158 "Ř" */
    0x4c, 0x70, 0x47, 0xe8, 0x50, 0x60, 0xc1, 0x87,
    0xfa, 0x34, 0x28, 0x70, 0x40,

    /* U+0159 "ř" */
    0xa6, 0xb, 0xc8, 0x88, 0x88, 0x80,

    /* U+015A "Ś" */
    0x8, 0x20, 0x1, 0xcc, 0x70, 0x60, 0x70, 0x3c,
    0xc, 0xc, 0x1c, 0x6f, 0x80,

    /* U+015B "ś" */
    0x18, 0x40, 0x1e, 0x8e, 0xf, 0x7, 0x6, 0x17,
    0x80,

    /* U+015C "Ŝ" */
    0x30, 0xd0, 0x1, 0xcc, 0x70, 0x60, 0x70, 0x3c,
    0xc, 0xc, 0x1c, 0x6f, 0x80,

    /* U+015D "ŝ" */
    0x31, 0x20, 0x1e, 0x8e, 0xf, 0x7, 0x6, 0x17,
    0x80,

    /* U+015E "Ş" */
    0x39, 0x8e, 0xc, 0xe, 0x7, 0x81, 0x81, 0x83,
    0x8d, 0xf0, 0x80, 0x83, 0x0,

    /* U+015F "ş" */
    0x7a, 0x38, 0x3c, 0x1c, 0x18, 0x5e, 0x30, 0x63,
    0x80,

    /* U+0160 "Š" */
    0x68, 0x60, 0x1, 0xcc, 0x70, 0x60, 0x70, 0x3c,
    0xc, 0xc, 0x1c, 0x6f, 0x80,

    /* U+0161 "š" */
    0x48, 0xc0, 0x1e, 0x8e, 0xf, 0x7, 0x6, 0x17,
    0x80,

    /* U+0162 "Ţ" */
    0xff, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
    0x10, 0x10, 0x10, 0x10, 0x8, 0x18,

    /* U+0163 "ţ" */
    0x42, 0x3c, 0x84, 0x21, 0x8, 0x71, 0x88, 0x23,
    0x0,

    /* U+0164 "Ť" */
    0x2c, 0x28, 0x10, 0xff, 0x10, 0x10, 0x10, 0x10,
    0x10, 0x10, 0x10, 0x10, 0x10, 0x10,

    /* U+0165 "ť" */
    0x15, 0x4f, 0x44, 0x44, 0x44, 0x30,

    /* U+0166 "Ŧ" */
    0xff, 0x10, 0x10, 0x10, 0x10, 0x7e, 0x10, 0x10,
    0x10, 0x10, 0x10,

    /* U+0167 "ŧ" */
    0x44, 0xf4, 0x4f, 0x44, 0x43,

    /* U+0168 "Ũ" */
    0x34, 0x2c, 0x0, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x81, 0x81, 0x81, 0x81, 0x42, 0x3c,

    /* U+0169 "ũ" */
    0x69, 0x60, 0x21, 0x86, 0x18, 0x61, 0x87, 0x37,
    0x40,

    /* U+016A "Ū" */
    0x3c, 0x0, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x81, 0x81, 0x81, 0x42, 0x3c,

    /* U+016B "ū" */
    0x78, 0x0, 0x21, 0x86, 0x18, 0x61, 0x87, 0x37,
    0x40,

    /* U+016C "Ŭ" */
    0x24, 0x18, 0x0, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x81, 0x81, 0x81, 0x81, 0x42, 0x3c,

    /* U+016D "ŭ" */
    0x48, 0xc0, 0x21, 0x86, 0x18, 0x61, 0x87, 0x37,
    0x40,

    /* U+016E "Ů" */
    0x18, 0x24, 0x24, 0x18, 0x81, 0x81, 0x81, 0x81,
    0x81, 0x81, 0x81, 0x81, 0x81, 0x42, 0x3c,

    /* U+016F "ů" */
    0x31, 0x24, 0x8c, 0x86, 0x18, 0x61, 0x86, 0x1c,
    0xdd,

    /* U+0170 "Ű" */
    0x34, 0x2c, 0x0, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x81, 0x81, 0x81, 0x81, 0x42, 0x3c,

    /* U+0171 "ű" */
    0x69, 0x60, 0x21, 0x86, 0x18, 0x61, 0x87, 0x37,
    0x40,

    /* U+0172 "Ų" */
    0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x81, 0x42, 0x3c, 0x8, 0x10, 0x1c,

    /* U+0173 "ų" */
    0x86, 0x18, 0x61, 0x86, 0x1c, 0xdd, 0x8, 0x20,
    0xc0,

    /* U+0174 "Ŵ" */
    0x2, 0x0, 0x38, 0x1, 0x21, 0x86, 0x14, 0x30,
    0xa1, 0x8d, 0x9c, 0x6c, 0x92, 0x24, 0x91, 0x24,
    0x8b, 0x2c, 0x70, 0xc1, 0x86, 0xc, 0x30,

    /* U+0175 "ŵ" */
    0x6, 0x1, 0x60, 0x0, 0x23, 0x14, 0x66, 0x94,
    0x9a, 0x91, 0x5e, 0x29, 0x86, 0x30, 0x46, 0x0,

    /* U+0176 "Ŷ" */
    0x8, 0xa, 0xd, 0x88, 0x26, 0x31, 0x10, 0xd8,
    0x28, 0x1c, 0x4, 0x2, 0x1, 0x0, 0x80, 0x40,

    /* U+0177 "ŷ" */
    0x18, 0x24, 0x0, 0x42, 0x42, 0x66, 0x24, 0x24,
    0x38, 0x18, 0x18, 0x10, 0x10, 0x60,

    /* U+0178 "Ÿ" */
    0x34, 0x0, 0xc3, 0x42, 0x62, 0x34, 0x14, 0x1c,
    0x8, 0x8, 0x8, 0x8, 0x8,

    /* U+0179 "Ź" */
    0x8, 0x30, 0x47, 0xf0, 0x60, 0x82, 0xc, 0x10,
    0x60, 0x82, 0xc, 0x1f, 0xc0,

    /* U+017A "ź" */
    0x10, 0x40, 0x3f, 0xc, 0x61, 0x8, 0x63, 0xf,
    0xc0,

    /* U+017B "Ż" */
    0x10, 0x3, 0xf8, 0x30, 0xc1, 0x6, 0x8, 0x30,
    0x41, 0x86, 0xf, 0xe0,

    /* U+017C "ż" */
    0x20, 0x0, 0x3f, 0x1c, 0x63, 0x8, 0x63, 0xf,
    0xc0,

    /* U+017D "Ž" */
    0x6c, 0x50, 0x47, 0xf0, 0x60, 0x82, 0xc, 0x10,
    0x60, 0x82, 0xc, 0x1f, 0xc0,

    /* U+017E "ž" */
    0x48, 0xc0, 0x3f, 0xc, 0x61, 0x8, 0x63, 0xf,
    0xc0,

    /* U+017F "ſ" */
    0x72, 0x49, 0x24, 0x92, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 63, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 64, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 104, .box_w = 3, .box_h = 4, .ofs_x = 2, .ofs_y = 7},
    {.bitmap_index = 6, .adv_w = 142, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 19, .adv_w = 144, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 32, .adv_w = 220, .box_w = 11, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 48, .adv_w = 144, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 59, .adv_w = 67, .box_w = 1, .box_h = 4, .ofs_x = 2, .ofs_y = 7},
    {.bitmap_index = 60, .adv_w = 82, .box_w = 3, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 65, .adv_w = 82, .box_w = 3, .box_h = 13, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 70, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 74, .adv_w = 148, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 81, .adv_w = 65, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 82, .adv_w = 103, .box_w = 4, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 83, .adv_w = 65, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 84, .adv_w = 81, .box_w = 5, .box_h = 13, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 93, .adv_w = 141, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 103, .adv_w = 91, .box_w = 4, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 109, .adv_w = 137, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 118, .adv_w = 138, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 128, .adv_w = 145, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 138, .adv_w = 133, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 147, .adv_w = 139, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 157, .adv_w = 127, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 167, .adv_w = 139, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 177, .adv_w = 139, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 187, .adv_w = 65, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 189, .adv_w = 68, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 192, .adv_w = 148, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 199, .adv_w = 148, .box_w = 6, .box_h = 4, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 202, .adv_w = 148, .box_w = 7, .box_h = 8, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 209, .adv_w = 115, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 218, .adv_w = 216, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 238, .adv_w = 155, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 251, .adv_w = 147, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 261, .adv_w = 164, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 272, .adv_w = 162, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 283, .adv_w = 135, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 292, .adv_w = 132, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 301, .adv_w = 167, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 314, .adv_w = 166, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 325, .adv_w = 60, .box_w = 1, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 327, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 336, .adv_w = 151, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 347, .adv_w = 127, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 356, .adv_w = 202, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 370, .adv_w = 169, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 381, .adv_w = 171, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 394, .adv_w = 143, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 404, .adv_w = 171, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 418, .adv_w = 144, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 428, .adv_w = 144, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 438, .adv_w = 145, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 449, .adv_w = 167, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 460, .adv_w = 155, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 473, .adv_w = 221, .box_w = 13, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 491, .adv_w = 153, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 504, .adv_w = 152, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 517, .adv_w = 141, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 527, .adv_w = 82, .box_w = 3, .box_h = 13, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 532, .adv_w = 81, .box_w = 5, .box_h = 13, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 541, .adv_w = 82, .box_w = 3, .box_h = 13, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 546, .adv_w = 106, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 550, .adv_w = 102, .box_w = 6, .box_h = 1, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 551, .adv_w = 72, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 552, .adv_w = 126, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 558, .adv_w = 137, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 568, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 574, .adv_w = 137, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 584, .adv_w = 131, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 591, .adv_w = 83, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 598, .adv_w = 137, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 608, .adv_w = 132, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 617, .adv_w = 54, .box_w = 1, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 619, .adv_w = 54, .box_w = 2, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 623, .adv_w = 123, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 632, .adv_w = 54, .box_w = 1, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 634, .adv_w = 196, .box_w = 11, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 645, .adv_w = 132, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 651, .adv_w = 134, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 658, .adv_w = 137, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 668, .adv_w = 137, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 678, .adv_w = 84, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 682, .adv_w = 118, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 688, .adv_w = 73, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 693, .adv_w = 132, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 699, .adv_w = 126, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 707, .adv_w = 183, .box_w = 11, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 718, .adv_w = 122, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 725, .adv_w = 126, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 736, .adv_w = 124, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 742, .adv_w = 95, .box_w = 5, .box_h = 13, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 751, .adv_w = 74, .box_w = 1, .box_h = 18, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 754, .adv_w = 95, .box_w = 5, .box_h = 13, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 763, .adv_w = 148, .box_w = 7, .box_h = 3, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 766, .adv_w = 63, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 767, .adv_w = 64, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 770, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 780, .adv_w = 137, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 790, .adv_w = 162, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 799, .adv_w = 123, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 809, .adv_w = 60, .box_w = 1, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 811, .adv_w = 127, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 821, .adv_w = 132, .box_w = 4, .box_h = 1, .ofs_x = 2, .ofs_y = 10},
    {.bitmap_index = 822, .adv_w = 205, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 836, .adv_w = 102, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 840, .adv_w = 130, .box_w = 7, .box_h = 6, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 846, .adv_w = 148, .box_w = 6, .box_h = 3, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 849, .adv_w = 149, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 857, .adv_w = 107, .box_w = 4, .box_h = 1, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 858, .adv_w = 102, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 862, .adv_w = 148, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 868, .adv_w = 99, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 871, .adv_w = 100, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 875, .adv_w = 72, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 876, .adv_w = 131, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 886, .adv_w = 135, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 895, .adv_w = 65, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 896, .adv_w = 60, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 897, .adv_w = 68, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 900, .adv_w = 108, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 905, .adv_w = 130, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 910, .adv_w = 180, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 924, .adv_w = 190, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 938, .adv_w = 198, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 954, .adv_w = 115, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 963, .adv_w = 155, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 979, .adv_w = 155, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 995, .adv_w = 155, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1011, .adv_w = 155, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1026, .adv_w = 155, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1039, .adv_w = 155, .box_w = 10, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1057, .adv_w = 223, .box_w = 12, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1074, .adv_w = 164, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1088, .adv_w = 135, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1099, .adv_w = 135, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1110, .adv_w = 135, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1121, .adv_w = 135, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1131, .adv_w = 60, .box_w = 2, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1135, .adv_w = 60, .box_w = 2, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1139, .adv_w = 60, .box_w = 5, .box_h = 14, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1148, .adv_w = 60, .box_w = 4, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1155, .adv_w = 165, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1168, .adv_w = 169, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1181, .adv_w = 171, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1197, .adv_w = 171, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1213, .adv_w = 171, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1229, .adv_w = 171, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1245, .adv_w = 171, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1260, .adv_w = 148, .box_w = 7, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1266, .adv_w = 171, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1279, .adv_w = 167, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1293, .adv_w = 167, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1307, .adv_w = 167, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1321, .adv_w = 167, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1334, .adv_w = 152, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1350, .adv_w = 142, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1360, .adv_w = 138, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1369, .adv_w = 126, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1378, .adv_w = 126, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1387, .adv_w = 126, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1396, .adv_w = 126, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1405, .adv_w = 126, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1414, .adv_w = 126, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1423, .adv_w = 206, .box_w = 11, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1434, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1443, .adv_w = 131, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1453, .adv_w = 131, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1463, .adv_w = 131, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1473, .adv_w = 131, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1483, .adv_w = 54, .box_w = 2, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1486, .adv_w = 54, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1489, .adv_w = 54, .box_w = 5, .box_h = 11, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1496, .adv_w = 54, .box_w = 4, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1502, .adv_w = 130, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1513, .adv_w = 132, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1522, .adv_w = 134, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1532, .adv_w = 134, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1542, .adv_w = 134, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1552, .adv_w = 134, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1562, .adv_w = 134, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1572, .adv_w = 148, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1578, .adv_w = 134, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1585, .adv_w = 132, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1594, .adv_w = 132, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1603, .adv_w = 132, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1612, .adv_w = 132, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1621, .adv_w = 126, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1635, .adv_w = 137, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1648, .adv_w = 126, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1659, .adv_w = 155, .box_w = 10, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1676, .adv_w = 126, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1685, .adv_w = 155, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1699, .adv_w = 126, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1708, .adv_w = 155, .box_w = 10, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1726, .adv_w = 126, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1735, .adv_w = 164, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1749, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1758, .adv_w = 164, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1772, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1781, .adv_w = 164, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1794, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1803, .adv_w = 164, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1817, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1826, .adv_w = 162, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1840, .adv_w = 159, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1853, .adv_w = 165, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1866, .adv_w = 137, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1877, .adv_w = 135, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1887, .adv_w = 131, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1897, .adv_w = 135, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1908, .adv_w = 131, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1918, .adv_w = 135, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1928, .adv_w = 131, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1938, .adv_w = 135, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1951, .adv_w = 131, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1961, .adv_w = 135, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1972, .adv_w = 131, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1982, .adv_w = 167, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1998, .adv_w = 137, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2011, .adv_w = 167, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2027, .adv_w = 137, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2040, .adv_w = 167, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2055, .adv_w = 137, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2068, .adv_w = 167, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2084, .adv_w = 137, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2098, .adv_w = 166, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2112, .adv_w = 132, .box_w = 8, .box_h = 14, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 2126, .adv_w = 174, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2140, .adv_w = 132, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2150, .adv_w = 60, .box_w = 5, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2159, .adv_w = 54, .box_w = 5, .box_h = 11, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 2166, .adv_w = 60, .box_w = 4, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2173, .adv_w = 54, .box_w = 4, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2179, .adv_w = 60, .box_w = 5, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2188, .adv_w = 54, .box_w = 5, .box_h = 11, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 2195, .adv_w = 60, .box_w = 2, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2199, .adv_w = 54, .box_w = 2, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2203, .adv_w = 60, .box_w = 1, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2205, .adv_w = 54, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2206, .adv_w = 188, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2219, .adv_w = 109, .box_w = 5, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2228, .adv_w = 128, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2242, .adv_w = 54, .box_w = 4, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2249, .adv_w = 151, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2263, .adv_w = 123, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2274, .adv_w = 118, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2280, .adv_w = 127, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2291, .adv_w = 54, .box_w = 2, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2295, .adv_w = 127, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2306, .adv_w = 54, .box_w = 2, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2310, .adv_w = 127, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2319, .adv_w = 76, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2324, .adv_w = 126, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2333, .adv_w = 81, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2339, .adv_w = 133, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2350, .adv_w = 54, .box_w = 3, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2355, .adv_w = 169, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2369, .adv_w = 132, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2378, .adv_w = 169, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2392, .adv_w = 132, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2401, .adv_w = 169, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2415, .adv_w = 132, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2424, .adv_w = 169, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2438, .adv_w = 132, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2447, .adv_w = 171, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2462, .adv_w = 134, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2472, .adv_w = 171, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2488, .adv_w = 134, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2498, .adv_w = 171, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2514, .adv_w = 134, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2524, .adv_w = 225, .box_w = 13, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2542, .adv_w = 224, .box_w = 13, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2555, .adv_w = 144, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2568, .adv_w = 84, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2574, .adv_w = 144, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2587, .adv_w = 84, .box_w = 5, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2594, .adv_w = 144, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2607, .adv_w = 84, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2613, .adv_w = 144, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2626, .adv_w = 118, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2635, .adv_w = 144, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2648, .adv_w = 118, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2657, .adv_w = 144, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2670, .adv_w = 118, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2679, .adv_w = 144, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2692, .adv_w = 118, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2701, .adv_w = 145, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2715, .adv_w = 73, .box_w = 5, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2724, .adv_w = 145, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2738, .adv_w = 84, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2744, .adv_w = 145, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2755, .adv_w = 73, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2760, .adv_w = 167, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2774, .adv_w = 132, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2783, .adv_w = 167, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2796, .adv_w = 132, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2805, .adv_w = 167, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2819, .adv_w = 132, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2828, .adv_w = 167, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2843, .adv_w = 132, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2852, .adv_w = 167, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2866, .adv_w = 132, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2875, .adv_w = 167, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2889, .adv_w = 132, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2898, .adv_w = 221, .box_w = 13, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2921, .adv_w = 183, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2937, .adv_w = 152, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2953, .adv_w = 126, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2967, .adv_w = 152, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2980, .adv_w = 141, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2993, .adv_w = 124, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3002, .adv_w = 141, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3014, .adv_w = 124, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3023, .adv_w = 141, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3036, .adv_w = 124, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3045, .adv_w = 70, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 160, .range_length = 13, .glyph_id_start = 96,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 174, .range_length = 155, .glyph_id_start = 109,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 330, .range_length = 54, .glyph_id_start = 264,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Pair left and right glyphs for kerning*/
static const uint16_t kern_pair_glyph_ids[] =
{
    3, 7,
    3, 13,
    3, 15,
    3, 21,
    3, 98,
    7, 3,
    7, 8,
    7, 61,
    7, 109,
    8, 7,
    8, 13,
    8, 15,
    8, 21,
    8, 98,
    9, 98,
    11, 7,
    11, 13,
    11, 15,
    11, 21,
    11, 33,
    11, 64,
    11, 105,
    12, 19,
    12, 20,
    12, 24,
    12, 61,
    12, 117,
    13, 3,
    13, 8,
    13, 17,
    13, 18,
    13, 20,
    13, 22,
    13, 23,
    13, 24,
    13, 25,
    13, 26,
    13, 32,
    13, 33,
    13, 105,
    13, 117,
    14, 19,
    14, 20,
    14, 24,
    14, 61,
    14, 117,
    15, 3,
    15, 8,
    15, 17,
    15, 18,
    15, 20,
    15, 22,
    15, 23,
    15, 24,
    15, 25,
    15, 26,
    15, 32,
    15, 33,
    15, 105,
    15, 117,
    16, 13,
    16, 15,
    17, 13,
    17, 15,
    17, 24,
    17, 61,
    17, 64,
    19, 21,
    20, 11,
    20, 13,
    20, 15,
    20, 63,
    20, 107,
    20, 111,
    21, 11,
    21, 13,
    21, 15,
    21, 18,
    21, 63,
    21, 109,
    21, 111,
    21, 117,
    22, 13,
    22, 15,
    22, 109,
    23, 13,
    23, 15,
    23, 64,
    24, 4,
    24, 7,
    24, 13,
    24, 15,
    24, 17,
    24, 20,
    24, 21,
    24, 22,
    24, 23,
    24, 24,
    24, 25,
    24, 26,
    24, 27,
    24, 28,
    24, 29,
    24, 64,
    24, 98,
    24, 107,
    25, 11,
    25, 13,
    25, 15,
    25, 63,
    25, 107,
    25, 111,
    26, 13,
    26, 15,
    26, 24,
    26, 61,
    26, 64,
    27, 61,
    28, 61,
    30, 61,
    31, 24,
    31, 61,
    33, 13,
    33, 15,
    33, 16,
    33, 61,
    33, 64,
    33, 109,
    60, 98,
    61, 3,
    61, 8,
    61, 11,
    61, 12,
    61, 14,
    61, 16,
    61, 18,
    61, 30,
    61, 32,
    61, 33,
    61, 61,
    61, 63,
    61, 95,
    61, 105,
    61, 107,
    61, 108,
    61, 109,
    61, 111,
    61, 112,
    61, 117,
    61, 118,
    61, 122,
    61, 150,
    61, 182,
    63, 7,
    63, 13,
    63, 15,
    63, 21,
    63, 33,
    63, 64,
    63, 105,
    64, 11,
    64, 17,
    64, 18,
    64, 20,
    64, 21,
    64, 22,
    64, 23,
    64, 25,
    64, 26,
    64, 33,
    64, 61,
    64, 63,
    64, 93,
    64, 105,
    64, 111,
    64, 117,
    92, 98,
    95, 19,
    95, 20,
    95, 24,
    95, 61,
    95, 117,
    97, 61,
    98, 3,
    98, 8,
    98, 10,
    98, 18,
    98, 61,
    98, 62,
    98, 94,
    98, 109,
    105, 13,
    105, 15,
    105, 16,
    105, 61,
    105, 64,
    105, 109,
    109, 7,
    109, 21,
    109, 33,
    109, 98,
    109, 105,
    111, 7,
    111, 13,
    111, 15,
    111, 21,
    111, 33,
    111, 64,
    111, 105,
    112, 61,
    116, 12,
    116, 14,
    116, 16,
    116, 29,
    116, 64,
    116, 95,
    116, 108,
    116, 118,
    116, 182,
    118, 19,
    118, 20,
    118, 24,
    118, 61,
    118, 117,
    122, 18,
    122, 19,
    122, 20,
    122, 24,
    122, 25,
    122, 61,
    126, 61,
    150, 61,
    182, 19,
    182, 20,
    182, 24,
    182, 61,
    182, 117
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    -8, -18, -18, -14, -3, -8, -8, -14,
    -5, -8, -18, -18, -14, -3, -3, -8,
    -31, -31, -10, -3, -15, -3, -8, -3,
    -5, -11, -4, -18, -18, -6, -19, -6,
    -3, -6, -3, -5, -2, -20, -10, -10,
    -11, -8, -3, -5, -11, -4, -18, -18,
    -6, -19, -6, -3, -6, -3, -5, -2,
    -20, -10, -10, -11, -9, -9, -6, -6,
    -4, -2, -10, -3, -3, -5, -5, -3,
    -8, -3, -4, -8, -8, -4, -4, -1,
    -4, -9, -6, -6, -1, -8, -8, -10,
    -13, -10, -28, -28, -3, -4, -13, -2,
    -3, 4, -3, -2, -8, -8, -20, -36,
    -11, -14, -3, -5, -5, -3, -8, -3,
    -6, -6, -4, -2, -10, -14, -14, -15,
    -17, -17, -10, -10, -9, -8, -9, -1,
    -3, -18, -18, -18, -8, -8, 4, -8,
    -11, -14, -8, -11, -18, -8, -8, -8,
    -8, -16, -18, -11, -11, -8, -8, -8,
    -8, -8, -31, -31, -10, -3, -15, -3,
    -15, -10, -24, -10, -13, -10, -10, -10,
    -10, -9, -18, -15, 8, -9, -15, -10,
    -3, -8, -3, -5, -11, -4, -8, -3,
    -3, -3, -8, -11, -3, -3, -3, -10,
    -10, -9, -8, -9, -1, -8, -11, -1,
    -6, -1, -8, -31, -31, -10, -3, -15,
    -3, -15, -9, -9, -8, -9, -8, -9,
    -8, -9, -9, -8, -3, -5, -9, -4,
    -9, -11, -10, -11, -8, -14, -17, -9,
    -8, -3, -5, -11, -4
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 237,
    .glyph_ids_size = 1
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_pairs,
    .kern_scale = 16,
    .cmap_num = 4,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif

};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t inter_14 = {
#else
lv_font_t inter_14 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 18,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .static_bitmap = 0,
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if INTER_14*/
