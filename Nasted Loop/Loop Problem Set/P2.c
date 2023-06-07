#include <stdio.h>
int main()
{
    int row, column, n;

    scanf("%d", &n);
    for (row = 1; row <= n; row++)// 1 ; 1 <=4//for2//printf ;1+1=2
    {
        for (column = row; column <= row + n-1 ; column++)// 0 = 1 ; 1 =<1 //
        {
            printf("%d",column);
            //printf("%d", row);
        }
        printf("\n");
    }
    return 0;
}