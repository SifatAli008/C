#include <stdio.h>
int main()
{
    int row, column, space, n;

    scanf("%d", &n);
    for (row = 1; row <= n; row++)
    {
        for (space = 1; space <= n - row; space++)
        {
            printf("  ",space);
        }
        for (column = 1; column <= 2 * row - 1; column++)
        {
            if (column == 1 || row == n || column == 2 * row - 1)
            {
                printf("* ", column);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
