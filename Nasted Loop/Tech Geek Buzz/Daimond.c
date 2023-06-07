#include <stdio.h>
int main()
{
    int row, col, space, m, n;

    scanf("%d", &n);
    m = n / 2 + 1;
    for (row = 1; row <= m; row++)
    {

        for (space = 1; space <= m - row; space++)
        {
            printf("_", space);
        }

        for (col = 1; col <= 2 * row - 1; col++)
        {
            if (col == 1 || col == 2 * row - 1 || row == m || col == 2*row/2 )
            {
                printf("$");
            }
            else
            {
                printf("_");
            }
        }
        for (space = 1; space <= m - row; space++)
        {
            printf("_", space);
        }

        printf("\n");
    }
    for (row = m - 1; row >= 1; row--)
    {
        for (space = 1; space <= m - row; space++)
        {
            printf("_", space);
        }

        for (col = 1; col <= 2 * row - 1; col++)
        {

            if (col == 1 || col == 2 * row - 1 || row == m || col == 2*row/2 )
            {
                printf("$");
            }
            else
            {
                printf("_");
            }
        }
        for (space = 1; space <= m - row; space++)
        {
            printf("_", space);
        }

        printf("\n");
    }

    return 0;
}