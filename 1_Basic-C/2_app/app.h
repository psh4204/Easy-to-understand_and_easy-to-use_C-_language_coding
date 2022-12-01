
#ifndef APP_H
#define APP_H

#define STATIC3

#include <stdio.h>

#ifdef STATIC1
/// @brief example to *static*_local_val++ in function
/// @param  none
/// @return static_local_val
short test_static_count(void)
{
    static short count = 0;

    count ++;

    return count;
}

/// @brief example to local_val++ in function
/// @param  none
/// @return local_val
short test_count(void)
{
    short count = 0;

    count ++;

    return count;
}
#endif

#ifdef STATIC3
// no error when same functions in many files 
// Very Important when implement Interface 

static short id;

static void open(void)
{
    //implements
}

static void close(void)
{
    //implements
}

static void read(void)
{
    //implements
}

static void write(void)
{
    //implements
}
#endif


#endif /* APP_H */