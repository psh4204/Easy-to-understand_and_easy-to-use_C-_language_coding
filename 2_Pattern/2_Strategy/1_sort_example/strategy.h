#ifndef STRATGEY_H
#define STRATGEY_H

#include "app.h"

typedef struct
{
    void (*init)(void);
    bool (*set_number)(u32 *number, u32 len);
    bool (*sort)(u32 *number);
}sort_t;

#endif /*STRATGEY_H*/