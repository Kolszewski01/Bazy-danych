#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=3,y=5;
    printf("x=%d, adres:%p\n",x,&x);
    printf("y=%d, adres:%p\n",y,&y);
    {
        int temp=x;
        x=y;
        y=temp;
    }
    printf("x=%d, adres:%p\n",x,&x);
    printf("y=%d, adres:%p\n",y,&y);
    return 0;
}
