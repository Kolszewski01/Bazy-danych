#include <stdio.h>
#include <stdlib.h>

int foo(double(*f1)(int a),double(*f2)(int b), int n)
{
    for(int i=0;i<=n;i++)
    {
        if (f1(i)!=f2(i))
            return 0;
    }
    return 1;
}

double fun1(int a)
{
    return a+2;
}

double fun2(int a)
{
    return a-2;
}

int main()
{
    printf("%d\n",foo(fun1,fun1,5));
    printf("%d\n",foo(fun1,fun2,5));
    return 0;
}
