#ifndef __FONTS_H__
#define __FONTS_H__

#include "LIB/STD_TYPES.h"

/* Struct with width and height of each character and pointer to u16 */
typedef struct
{
    const u8 width;
    u8 height;
    const u16 *data;
} FontDef;


extern FontDef Font_7x10;
extern FontDef Font_11x18;
extern FontDef Font_16x26;

#endif // __FONTS_H__
