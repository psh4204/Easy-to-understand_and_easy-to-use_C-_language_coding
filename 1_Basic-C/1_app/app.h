#include <stdio.h>

#ifndef APP_H_
#define APP_H_

#define null (void *)0 // In all languages, null means address 0.

// Use typedef
typedef unsigned char   u8;  // char = 8bit = 1Byte 
typedef signed char     s8;

typedef unsigned short  u16;
typedef signed short    s16;

typedef unsigned long   u32;
typedef signed long     s32;

// Use enum
typedef enum
{
    RED,
    ORANGE,
    YELLOW,
    GREEN
}color_t;

// Bool Type created by enum

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

#endif /* APP_H_*/