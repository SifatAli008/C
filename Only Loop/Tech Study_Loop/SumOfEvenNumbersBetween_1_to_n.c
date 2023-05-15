#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    printf("Enter the last Number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
    }
         printf("Sum of all even number between 1 to %d: %d", n,sum);
         
    return 0;
}