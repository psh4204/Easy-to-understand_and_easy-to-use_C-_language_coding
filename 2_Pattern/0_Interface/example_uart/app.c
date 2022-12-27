#include "app.h"

void main(void)
{
    char *buffer = "hello";
    char data;
    uart_t * uart1 = init_uart1();
    uart1->open();
    uart1->write(buffer,5);

    while(true)
    {
        if(uart1->read(&data) == true)
        {
            switch(data)
            {
                case 'A':
                uart1->write(buffer, 5);
                break;

                case 'Q':
                goto exit;
                break;
            }
        }
    }

    // please.... Don't use 'goto'
    exit:
    uart1->close;
}