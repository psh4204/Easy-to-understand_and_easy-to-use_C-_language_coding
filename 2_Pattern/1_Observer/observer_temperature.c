#include "app.h"

#define MAX_OBSERVER_COUNT (10)

static observer_handler_t observer_handlers[MAX_OBSERVER_COUNT];
static u8 observer_handler_len = 0;

bool register_observer(observer_handler_t observer)
{
    u8 i = 0;

    // false if length is exceeded
    if(observer_handler_len >= MAX_OBSERVER_COUNT)
        return false;
    
    // false if the same handler is registered
    for(i = 0; i< MAX_OBSERVER_COUNT; i++)
    {
        if(observer_handlers[i] == observer)
            return false;
    }

    // regist handler
    observer_handlers[observer_handler_len++] = observer;
    return true;
}

bool unregister_observer(observer_handler_t observer)
{
    u8 i = 0;
    u8 j = 0;
    
    for(i = 0; i<observer_handler_len; i++)
    {
        // if find handler
        if(observer_handlers[i] == observer)
        {
            // clear handler and return true.
            for(j = i; j<observer_handler_len; j++)
            {
                if((j+1) == observer_handler_len)
                    break;
                observer_handlers[j] = observer_handlers[j+1];
            }
            observer_handler_len--;
            return true;
        }
    }
    return false;
}

/// @brief Update the temperature in each handler
/// @param temperature 
static void update_observer(u32 temperature)
{
    int i = 0;
    for(i = 0; i<observer_handler_len; i++)
    {
        observer_handlers[i](temperature, 0);
    }
}

/// @brief Calculate the temperature and update the observer.
/// @param  
void calculate_temperature(void)
{
    u32 degree = 0;

    /// implemetns

    update_observer(degree);
}