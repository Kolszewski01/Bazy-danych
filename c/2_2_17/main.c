#include <stdio.h>
#include <stdlib.h>

void foo()
{
    static int licznik=0;
    licznik++;
    printf("Liczba wyw.:%d\n",licznik);
}

int main()
{
    foo();
    foo();
    foo();
    return 0;
}
