#include <stdio.h>
int main()
{
    int row, column, n;
    scanf("%d", &n);
    for (row = n; row >= 1; row--)
    {
        for (column = 1; column <= row; column++)
        {
            printf("%d ", column);
            // printf("%d ",column);
            // printf("%d ",row);
        }
        printf("\n");
    }

    return 0;
}
