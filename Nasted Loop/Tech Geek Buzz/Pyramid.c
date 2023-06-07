#include <stdio.h>
int main()
{
    int row, col, space, n;

    scanf("%d", &n);
     for (row = 1 ; row <= n; row++)
    {

        for (space = 1; space <= n - row; space++)
        {
            printf("  ", space);
        }

        for (col = 1; col <= 2 * row - 1; col++)
        {
            if (col == 1 || col == 2 * row - 1 || row == n)
            {
                printf("* ", col);
            }
            else
            {
                printf("  ", col);
            }
        }

        printf("\n");
    }
    

   

    return 0;
}