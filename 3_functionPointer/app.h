#ifndef APP_H
#define APP_H

#define STRUCT_1

#include <stdio.h>

#ifdef F_POINTER1
static void test1(void)
{
    printf("TEST1 function\n");
}

static void test2(void)
{
    printf("TEST2 function\n");
}
#endif

#ifdef F_POINTER2
#include <time.h>
// F-pointer + typedef

typedef void (*handler_t)(void);        // typedef f_pointer. (for use to param)

static void timer(handler_t handler);   // param is f_pointer.
static void timer_callback(void);       // callback function.

/// @brief delay microseconds
/// @param ms 
void delay_ms(clock_t ms)
{
    clock_t start = clock();
    while(clock() - start <= ms);
}
#endif

#endif