#include <stdio.h>
#include <stdlib.h>

int* foo()
{
    return malloc(sizeof(int));
}

int main()
{
    printf("%p\n",foo());
    //printf("%Iu\n",sizeof(int));
    //printf("%Iu\n",sizeof(int*));
    //printf("%Iu\n",sizeof(int**));
    return 0;
}
