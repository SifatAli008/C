// problem set 13
#include <stdio.h>

int main()
{

    int row, col, space, n;
    scanf("%d", &n);

    for (row = 1; row <= n; row++)
    {

        for (col = 1; col <= row; col++)
        {

            if (col != n)
            {
                printf("%d ", col);
            }
        }

        for (space = row; space <= n - 2; space++)
        {
            printf("_ ");
        }

        for (space = n - 2; space >= row - 1; space--)
        {
            printf("_ ");
        }

        for (col = row; col >= 1; col--)
        {
            printf("%d ", col);
        }

        printf("\n");
    }
    return 0;
}
