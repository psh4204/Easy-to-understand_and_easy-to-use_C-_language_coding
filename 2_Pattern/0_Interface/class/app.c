#include "app.h"

void main(void)
{
    u8 i = 0;
    this.init();

    for(i = 0; i < 100; i++)
    {
        this.put(i);
        this.print();
    }

    this.print();
}