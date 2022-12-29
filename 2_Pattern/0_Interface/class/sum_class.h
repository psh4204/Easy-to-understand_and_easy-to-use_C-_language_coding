#ifndef CLASS_H
#define CLASS_H

// 1. make interface (class)

/// @brief Sum class
typedef struct
{
    int total;
    void (*init)(void);
    void (*put)(int number);
    void (*print)(void);
}sum_t;

extern sum_t this;
#endif /* CLASS_H */