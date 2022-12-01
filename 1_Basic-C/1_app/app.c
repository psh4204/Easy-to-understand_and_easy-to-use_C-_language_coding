#include "app.h"

void main(void)
{
    color_t color = RED;

    switch(color)
    {
        case RED:
        printf("\nRED\n");
        break;

        case ORANGE:
        printf("\nORANGE\n");
        break;

        case YELLOW:
        printf("\nYELLOW\n");
        break;

        case GREEN:
        printf("\nGREEN\n");
        break;
    }
}