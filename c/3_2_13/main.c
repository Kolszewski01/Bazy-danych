#include <stdio.h>
#include <stdlib.h>

double foo(double (*fun)(int arg), int n)
{
    return fun(n);
}

double funkcja(int a)
{
    return a+2;
}

int main()
{
    int a=8;
    printf("%lf\n",foo(funkcja,a));
    //printf("%lf\n",foo(&funkcja,a));
    return 0;
}
