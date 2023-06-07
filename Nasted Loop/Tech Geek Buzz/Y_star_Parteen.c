// Y star parteen
#include <stdio.h>
int main()
{
    int row, column, space, n, m;

    scanf("%d", &n);

    m = n / 2 + 1;

    for (row = m; row >= 1; row--)
    {
        for (space = 2; space <= n - row; space++)
        {
            printf(" ", space);
        }
        for (column = 1; column <= 2 * row - 1; column++)
        {
            if (column == 1 || column == 2 * row - 1)
            {
                printf("*", column);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    for (row = 1; row <= n/2; row++)
    {
        for(space = 1 ;space <= m;space++){
            printf(" ");
        }
        for(column = 1 ;column <= space+1;column++){
                if(column==1){
               printf("*");
                }
        }
        printf("\n");
    }

    return 0;
}