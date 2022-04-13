#include <stdio.h>
#include <stdlib.h>

void zamiana(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int x=3,y=5;
    printf("x=%d, adres:%p\n",x,&x);
    printf("y=%d, adres:%p\n",y,&y);
    zamiana(&x,&y);
    printf("x=%d, adres:%p\n",x,&x);
    printf("y=%d, adres:%p\n",y,&y);
    return 0;
}
