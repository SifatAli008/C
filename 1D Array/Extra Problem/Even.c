#include <stdio.h>
int main()
{
    int i, n;

    printf("enter number of elemnt: ");

    scanf("%d", &n);

    int num[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

printf("Even number:");

    for (i = 0; i < n; i++)
    {
        if (num[i] % 2 == 0)
        {
            printf("%d", num[i]);
        }
    }

    return 0;
}