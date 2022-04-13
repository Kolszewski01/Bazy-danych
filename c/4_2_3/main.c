#include <stdio.h>
#include <stdlib.h>

float foo(int n, const int tab[])
{
    float suma=0;
    for(int i=0;i<n;i++)
    {
        suma+=tab[i];
    }
    return suma/n;
}

int main()
{
    int tablica[]={4,-3,2,8,-2};
    printf("%f\n",foo(5,tablica));
    return 0;
}
