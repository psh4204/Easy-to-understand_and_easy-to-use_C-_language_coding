#include "app.h"

#ifdef STRUCT_1
void main(void)
{
    struct person Sihwan;

    Sihwan.name = "Sihwan";
    Sihwan.id = "1234567890";
    Sihwan.sex = MAN;
}

#endif

#ifdef F_POINTER_STRUCT 
static void open(void);
static void close(void);
static void read(void);
static void write(void);

static driver_t lcd =
{
    driver_id : LCD_DRIVER,
    open : open,
    close : close,
    read : read,
    write : write,
};

static void open(void)
{
    //
}

static void close(void)
{
    //
}

static void read(void)
{
    //
}

static void write(void)
{
    //
}

#endif