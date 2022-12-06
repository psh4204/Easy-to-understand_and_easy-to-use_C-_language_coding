#ifndef APP_H
#define APP_H

#define F_POINTER_STRUCT 

#include <stdio.h>

#ifdef STRUCT_1
// Only struct
enum
{
    MAN,
    WOMAN
};

struct person
{
    char * name;
    char * id;
    char sex;
};

#endif 

#ifdef F_POINTER_STRUCT 
// function Pointer & struct
typedef enum
{
    LCD_DRIVER,
    SEGEMENT_DRIVER
};
typedef struct
{
    char driver_id;
    void (*open)(void);
    void (*close)(void);
    void (*read)(void);
    void (*write)(void);
}driver_t;

#endif

#endif /*APP_H*/