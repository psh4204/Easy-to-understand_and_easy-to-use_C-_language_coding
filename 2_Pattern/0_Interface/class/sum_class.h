#ifndef CLASS_H
#define CLASS_H

// 1. make interface (class)
typedef struct
{
    int total;
    void (*init)(void);
    void (*put)(void);
    void (*print)(void);
}sum_t;

#endif /* CLASS_H */