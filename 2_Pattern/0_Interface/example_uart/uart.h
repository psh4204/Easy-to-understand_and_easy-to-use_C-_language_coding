#ifndef UART_H
#define UART_H

#ifdef __cplusplus
extern "C" {
#endif

typedef bool (*open_t)(void);
typedef bool (*close_t)(void);
typedef bool (*write_t)(char *buffer, short length);
typedef bool (*read_t)(char *data);

typedef struct
{
    open_t open;
    close_t close;
    write_t write;
    read_t read;
}uart_t;

/// @brief Init uart1 using uart interface
/// @param  
/// @return addres of uart1
extern uart_t *init_uart1(void);

#ifdef __cplusplus
}
#endif

#endif /* UART_H */