#include <stdio.h>
#include <stdlib.h>

void foo(int const*a, int*b)
{
    *b=*a;
}

int main()
{
    int x=2,y=7;
    printf("%d %p\n",x,&x);
    printf("%d %p\n",y,&y);
    foo(&x,&y);
    printf("%d %p\n",x,&x);
    printf("%d %p\n",y,&y);
    return 0;
}
