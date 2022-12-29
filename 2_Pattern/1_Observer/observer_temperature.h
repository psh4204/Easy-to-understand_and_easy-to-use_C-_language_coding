#include "app.h"

#ifndef OBSERVER_TEMPERATRUE_H_
#define OBSERVER_TEMPERATURE_H_

typedef void (*observer_handler_t)(u32 degree, u32 param1);

extern bool register_observer(observer_handler_t observer);
extern bool unregister_observer(observer_handler_t observer);
extern void calcualte_temperature(void);

#endif /* OBSERVER_TEMPERATURE_H_ */