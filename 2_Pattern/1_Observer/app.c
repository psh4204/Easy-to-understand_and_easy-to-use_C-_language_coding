#include "app.h"

static void display_degeree_handler(u32 degree, u32 param1);
static void file_write_degree_handler(u32 degree, u32 param1);

void main(void)
{
    register_observer(display_degeree_handler);
    register_observer(file_write_degree_handler);

    while(true)
    {
        calculate_temperature();
        sleep(1);
    }
}

static void display_degeree_handler(u32 degree, u32 param1)
{
    ///implements
    printf("Degree is %d\n", degree);
}

static void file_write_degree_handler(u32 degree, u32 param1)
{
    ///implements
    printf("Save degree : %d\n\n", degree);
}