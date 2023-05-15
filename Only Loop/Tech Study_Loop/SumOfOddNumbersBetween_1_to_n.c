#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    printf("Enter the last Number: ");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
        printf("Sum of all odd number between 1 to %d: %d", n,sum);


    return 0;
}