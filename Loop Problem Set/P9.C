// 9
#include <stdio.h>

int main()
{

    int row, column, n;
    scanf("%d", &n);

    for (row = 1; row <= n; row++)
    {
        for (column = row; column <= n + row; column++)
        {

            if (column % 2 != 0)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
    return 0;
}