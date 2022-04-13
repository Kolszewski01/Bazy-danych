#include <stdio.h>
#include <stdlib.h>

double* foo(int n)
{
    double *tab =malloc(n*sizeof(double));
    return tab;
}

int main()
{
    printf("%p\n",foo(4));
    return 0;
}
