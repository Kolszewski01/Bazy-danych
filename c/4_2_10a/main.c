#include <stdio.h>
#include <stdlib.h>

int foo(int n, int tab[])
{
    int temp=tab[0];
    for(int i=1;i<n;i++)
    {
        if(temp<tab[i])
            temp=tab[i];
    }
    return temp;
}

int main()
{
    int tablica[]={4,-55,22,-5,43};
    printf("%d\n",foo(5,tablica));
    return 0;
}
