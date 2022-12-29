#include "app.h"


static void init(void);
static void put(int number);
static void print(void);

// uhhh... singleton?
sum_t this = 
{
    total : 0,
    init : init,
    put : put,
    print : print,
};

static void init(void)
{
    this.total = 0;
}

static void put(int number)
{
    this.total += number;
}

static void print(void)
{
    printf("total : %d\n", this.total);
}
