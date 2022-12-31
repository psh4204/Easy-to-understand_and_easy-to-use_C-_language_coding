#include "app.h"

#define BUTTON_A 0
#define BUTTON_B 1
#define BUTTON_C 2
#define BUTTON_D 3

void main(void)
{
    u8 numbers[10] = {9, 20, 45, 2, 0, 50, 3, 5, 24, 75, 98};
    u8 ch;

    sort_t *sort;

    while(true)
    {
        scanf("%d", &ch);
        switch(ch)
        {
            case BUTTON_A:
                sort = init_quick_sort();
                break;
            
            case BUTTON_B:
                sort = init_insertion_sort();
                break;
            
            case BUTTON_C:
                sort = init_selection_sort();
                break;
            
            case BUTTON_D:
                sort = init_bubble_sort();
                break;
            
            default:
                continue;
        }
        sort->set_number(numbers, 10);
        sort->sort(numbers);
    }
}