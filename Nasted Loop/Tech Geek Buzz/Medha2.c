#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int row = 1; row <= n / 2 + 1; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            if (row == 1 || row == n / 2 + 1 || col == 1 || col == n)
            {
                printf("*");
            }
            else
            {
                printf("_");
            }
        }

        printf("\n");
    }

    for (int row = 2; row <= n / 2+1; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            if (row == 1 || row == n / 2+1 || col == 1 || col == n)
            {
                printf("*");
            }
            else
            {
                printf("_");
            }
        }

        printf("\n");
    }
}