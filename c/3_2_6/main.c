#include <stdio.h>
#include <stdlib.h>

void foo(int n, int*w)
{
    *w=n;
}

int main()
{
    int x=2,y=6;
    printf("x=%d, adres:%p\n",x,&x);
    printf("y=%d, adres:%p\n",y,&y);
    foo(x,&y);
    printf("x=%d, adres:%p\n",x,&x);
    printf("y=%d, adres:%p\n",y,&y);
    return 0;
}
