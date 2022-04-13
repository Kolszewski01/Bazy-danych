#include <stdio.h>
#include <stdlib.h>

double* foo()
{
    return malloc(sizeof(double));
}

int main()
{
    double* w=foo();
    printf("%p\n",w);
    printf("%Iu\n",_msize(w));
    //printf("%Iu\n",sizeof(int));
    //printf("%Iu\n",sizeof(int*));
    //printf("%Iu\n",sizeof(int**));
    return 0;
}
