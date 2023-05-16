#include <stdio.h>
int main()
{
    int row, column, n;

    scanf("%d", &n);

    for (row = n; row >= 1; row--)
    {

        for (column = 1; column <= row; column++)
        {
            printf("* ", column);
        }
        printf("\n");
    }
    return 0;
}