#include <stdio.h>
#include <stdlib.h>

int* foo(int*a, int*b)
{
    if(*b<*a)
        return b;
    return a;
}

int main()
{
    int x=4,y=-8;
    printf("x=%d, adres:%p\n",x,&x);
    printf("y=%d, adres:%p\n",y,&y);
    printf("%p\n",foo(&x,&y));
    return 0;
}
