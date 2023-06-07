#include <stdio.h>
int main()
{
    int row, column, n;

    scanf("%d", &n);

    for (row = 1; row <= n; row++)
    {
        for (column = 1; column <= row; column++)
        {
            printf("%c ",row+64);
        }
        printf("\n");
    }
    return 0;
}