//WAP that will show the multiplicative table (upto 5) for an integer N.
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= 5; i++)
    {
        printf("%d X %d = %d\n",n,i,i*n);
    }
    return 0;
}