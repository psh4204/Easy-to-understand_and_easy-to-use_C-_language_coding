#include "app.h"

#ifdef STATIC1
void main(void)
{
    while(1)
    {
        printf("normal count = %d \n", test_count());
        printf("static count = %d \n", test_static_count());
    }
}
#endif

#ifdef STATIC2
static short count = 0; // Like a private

void main(void)
{
    while(1)
    {
        printf("static global count = %d \n", count++);
    }
}
#endif


#ifdef STATIC3

#endif
