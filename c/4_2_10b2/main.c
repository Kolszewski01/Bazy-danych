#include <stdio.h>
#include <stdlib.h>

int foo(int n, int *tab)
{
    int temp=*tab;
    for(int i=1;i<n;i++)
    {
        if(temp>*(tab+i))
            temp=*(tab+i);
    }
    return temp;
}

int main()
{
    int *tablica=malloc(5*sizeof(int));
    *tablica =4;
    *(tablica+1)=-55;
    *(tablica+2)=22;
    *(tablica+3)=-5;
    *(tablica+4)=43;
    printf("%d\n",foo(5,tablica));
    return 0;
}
