// WAP that will display Fibonacci Series using recursion.
#include <stdio.h>
int fab(int n);
int main()
{
    int n;
    scanf("%d", &n);
    int result = fab(n);
    printf("Fibonacci Series of %d is %d", n, result);
}
int fab(int n)
{
    if ( n== 0)
    {
        return 0;
    }

    else if(n == 1)
    {
        return 1;
    }
    else{
        return  fab(n - 1) + fab(n - 2);
    }

  
}