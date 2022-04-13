#include <stdio.h>
#include <stdlib.h>

void foo(int n, int tab1[], int tab2[], int tab3[])
{
    for(int i=0;i<n;i++)
    {
        int temp=tab1[i];
        tab1[i]=tab3[i];
        tab3[i]=tab2[i];
        tab2[i]=temp;
    }
}

int main()
{
    int tablica1[] = {3,4,5,1,2,13};
    int tablica2[] = {3,5,6,-2,3,-9};
    int tablica3[] = {-3,4,5,2,2,3};
    foo(6,tablica1,tablica2,tablica3);
    for(int i=0;i<6;i++)
    {
        printf("t1:[%d]=%d\n",i,tablica1[i]);
    }
    for(int i=0;i<6;i++)
    {
        printf("t2:[%d]=%d\n",i,tablica2[i]);
    }
    for(int i=0;i<6;i++)
    {
        printf("t3:[%d]=%d\n",i,tablica3[i]);
    }
    return 0;
}
