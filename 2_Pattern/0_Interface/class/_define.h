#ifndef _DEFINE_H
#define _DEFINE_H

#ifdef __cplusplus
extern "C" {
#endif
/*_DEFINE_H*/
#include <stdio.h>

#define null (void*)0

typedef unsigned char   u8;  // char = 8bit = 1Byte 
typedef signed char     s8;

typedef unsigned short  u16;
typedef signed short    s16;

typedef unsigned long   u32;
typedef signed long     s32;

typedef enum
{
    false   = 0,
    true    = 1
}bool;

typedef enum
{
    off     = 0,
    on      = 1
}power;

typedef enum
{
    low     = 0,
    high    = 1
}switch_t;

#endif /*_DEFINE_H*/

#ifdef __cplusplus
}
#endif