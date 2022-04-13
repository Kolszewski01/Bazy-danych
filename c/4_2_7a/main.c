#include <stdio.h>
#include <stdlib.h>

void foo(int n, int tab1[], int tab2[], int tab3[])
{
    for(int i=0;i<n;i++)
    {
        tab3[i]=tab1[i]+tab2[i];
    }
}

int main()
{
    int tablica1[] = {3,4,5,1,2,13};
    int tablica2[] = {4,5,6,-2,3,-9};
    int tablica3[] = {-3,4,5,2,2,3};
    foo(6,tablica1,tablica2,tablica3);
    for(int i=0;i<6;i++)
    {
        printf("t3:[%d]=%d\n",i,tablica3[i]);
    }
    return 0;
}
