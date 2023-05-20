#include <stdio.h>
int main()
{
    int i, n, count = 0;

    printf("enter number of elemnt: ");

    scanf("%d", &n);

    int num[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (num[i] < 0)
        {
            printf("%d", num[i]);
            count++;
        }
    }

     printf("\n Negative number: %d", count);

    return 0;
}