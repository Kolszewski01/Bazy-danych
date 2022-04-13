#include <stdio.h>
#include <stdlib.h>

void foo(double*wsk)
{
    free(wsk);
}

int main()
{
    double * tablica =malloc(4*sizeof(double));
    foo(tablica);
    return 0;
}
