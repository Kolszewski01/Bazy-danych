#include <stdio.h>
#include <stdlib.h>

int potega(int n, int m)
{
    int temp=1;
    for(int i=1;i<=m;i++)
    {
        temp*=n;
    }
    return temp;
}

int czesccalk(int n, int m)
{
    int i=0;
    while(potega(i,m)<=n)
    {
        i++;
    }
    return i-1;
}

int suma(int n, int m)
{
    int temp=0;
    for(int i=0;i<=n;i++)
    {
        temp+=czesccalk(i,m);
    }
    return temp;
}

int main()
{
    printf("%d\n",suma(9,3));
    return 0;
}
