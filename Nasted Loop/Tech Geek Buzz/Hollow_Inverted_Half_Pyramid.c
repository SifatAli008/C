#include <stdio.h>
int main()
{
    int row, column, n;

    scanf("%d", &n);
    for (row = n; row >= 1; row--)
    {
        for (column = 1; column <= row; column++)
        {
            if (row == 1 || row == n || row == column || column == 1)
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
