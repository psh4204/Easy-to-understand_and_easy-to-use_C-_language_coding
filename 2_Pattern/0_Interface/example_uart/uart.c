#include "app.h"

/*
concrete_code of uart.h
*/

static bool open(void);
static bool close(void);
static bool write(char *buffe, short length);
static bool read(char *data);

uart_t *init_uart1(void)
{
    static uart_t uart;
    uart.open = open;
    uart.close = close;
    uart.write = write;
    uart.read = read;

    return &uart;
}

static bool open(void)
{
    // implements
    return true;
}

static bool close(void)
{
    // implements
    return true;
}

static bool write(char * buffer, short length)
{
    // implements
    return true;
}

static bool read(char *data)
{
    // implements
    return true;
}
