#include <stdio.h>
#include <stdlib.h>

int foo(int const*a,int const*b)
{
    return *a+*b;
}

int main()
{
    int x=7, y=12;
    printf("%d\n",foo(&x,&y));
    return 0;
}
