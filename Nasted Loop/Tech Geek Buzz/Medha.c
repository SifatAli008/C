#include <stdio.h>
int main()
{
    int row, column, space, n;

    printf("Enter the number of one row: ");
    scanf("%d", &n);

    for (row = 1; row <= n; row++) // row = 1 to 5
    {
        for (column = 1; column <= row; column++) // column = 1 to row
        {
            printf("*");
        }
        for (space = n - 1; space >= row; space--) // space = 4 to row
        {
            printf(" ");
        }

        for (space = n - 1; space >= row; space--) // space = 4 to row
        {
            printf(" ");
        }
        for (column = 1; column <= row; column++) // column = 1 to row
        {
            printf("*");
        }
        printf("\n"); // newline
    }

    return 0;
}