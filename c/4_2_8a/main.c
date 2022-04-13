#include <stdio.h>
#include <stdlib.h>

void foo(int n, int tab1[], int tab2[], int tab3[])
{
    for(int i=0;i<n;i++)
    {
        tab3[i]=tab1[i];
        tab3[i+n]=tab2[i];
    }
}

int main()
{
    int tablica1[] = {-15,4,5,1};
    int tablica2[] = {3,5,11,-9};
    int tablica3[] = {-3,4,5,2,2,3,-7,1};
    foo(4,tablica1,tablica2,tablica3);
    for(int i=0;i<8;i++)
    {
        printf("t3:[%d]=%d\n",i,tablica3[i]);
    }
    return 0;
}
