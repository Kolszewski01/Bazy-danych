#include <stdio.h>
#include <stdlib.h>

int ileNieZero(int n, int tab[])
{
    int licznik=0;
    for(int i=0;i<n;i++)
    {
        if(tab[i]!=0)
            licznik++;
    }
    return licznik;
}

int* foo(int n, int tab[])
{
    int licznik=ileNieZero(n,tab);
    int* tab2=malloc(licznik*sizeof(int));
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(tab[i]!=0)
        {
            *(tab2+j)=tab[i];
            j++;
        }
    }
    return tab2;
}



int main()
{
    int tablica[]={3,6,4,0};
    int * wsk=foo(4,tablica);
    for(int i;i<ileNieZero(4,tablica);i++)
    {
        printf("[%d]=%d\n",i,*(wsk+i));
    }
    return 0;
}
