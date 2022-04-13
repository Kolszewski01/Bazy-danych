#include <stdio.h>
#include <stdlib.h>

int foo(int n)
{
    int i=0;
    while(i*i<=n)
    {
        i++;
    }
    return i-1;
}

int foo2(int n)
{
    int i=n;
    while(i>0)
    {
        if (i*i<=n)
        {
            return i;
        }
        i--;
    }
    return i;
}

int main()
{
    printf("%d\n",foo2(14));
    return 0;
}
