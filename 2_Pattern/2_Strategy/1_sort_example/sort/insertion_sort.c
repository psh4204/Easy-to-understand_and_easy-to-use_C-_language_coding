#include "../strategy.h"

static void init(void);
static bool set_number(u32 *number, u32 len);
static bool sort(u32 *number);

static sort_t this =
{
    init :init,
    set_number:set_number,
    sort:sort,
};

sort_t *init_insertion_sort(void)
{
    init();
    return &this;
}

static void init(void)
{
    // immplements
}

static bool set_number(u32 *number, u32 len)
{
    // immplements
    return true;
}

static bool sort(u32 *number)
{
    // immplements
    printf("insertion_sort\n");
    return true;
}