#include "sum_class.h"

static void init(void);
static void put(int number);
static void print(void);

// make a instance.
sum_t this =
{
    total : 0,
    init : init,
    put : put,
    print : print,
};

static void init(void)
{
    
}