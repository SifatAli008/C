#include <stdio.h>
int main()
{
    int row, column, n;
    scanf("%d", &n);

    for (row = 1; row <=n-1; row++)
    {
        for (column = n; column >=n-row; column--)
        {
            printf("%d", row);
        }        
        printf("\n");
    }
    return 0;
}
