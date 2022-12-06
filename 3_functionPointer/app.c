#include "app.h"

#ifdef F_POINTER1
void main(void)
{
    void (*test_function)(void); // val (*name)(param)
    test_function = test1;
    test_function();

    test_function = test2;
    test_function();
}
#endif

#ifdef F_POINTER2
void main(void)
{
    timer(timer_callback);
}

static void timer_callback(void)
{
    printf("timer call back");
}

/// @brief loop 1sec with handler.
/// @param handler 
static void timer(handler_t handler)
{
    while(1)
    {
        handler();
        delay_ms(1000);
    }
}

#endif