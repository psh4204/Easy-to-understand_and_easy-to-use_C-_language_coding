#include <stdio.h>
#include "_define.h"
#include "observer_temperature.h"

#define MAX_OBSERVER_COUNT (10)
static observer_handler_t observer_handlers[MAX_OBSERVER_COUNT];
static u8 observer_handler_len  = 0;

/// @brief Register observer
/// @param observer 
/// @return 
bool register_observer(observer_handler_t observer)
{
    u8 idx = 0;
    if(observer_handler_len >= MAX_OBSERVER_COUNT)
        return false;
    for(idx = 0; idx < MAX_OBSERVER_COUNT; idx++)
    {
        if(observer_handlers[idx] == observer)
            return false;
    }
    
    observer_handlers[observer_handler_len++] = observer;
    return true;
}

/// @brief Unregister observer
/// @param observer 
/// @return 
bool unregister_observer(observer_handler_t observer)
{
    u8 i = 0;
    for(i = 0; i < observer_handler_len ; i++)
    {
        if(observer_handlers[i] == observer)
        {
            for(u8 j = i; j<observer_handler_len; j++)
            {
                if((j+1) == observer_handler_len)
                    break;
                observer_handlers[j] = observer_handlers[j+1];
            }
            observer_handler_len --;
            return true;
        }
    }
    return false;
}

/// @brief Notify temp to observer.
/// @param temperature 
static void update_observer(u32 temperature)
{
    int i = 0;
    for(i = 0 ; i<observer_handler_len; i++)
    {
        observer_handlers[i](temperature, 0);
    }
}

/// @brief Calc temp and Notify the observer.
/// @param void
void calculate_temperature(void)
{
    u32 degree = 0;

    // implements

    update_observer(degree);
}
