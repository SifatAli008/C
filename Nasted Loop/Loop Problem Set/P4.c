#include <stdio.h>
int main()
{
    int row, column, space, n;
    scanf("%d", &n);

    for (row = 1; row <= n; row++)
    {
        for (space = 1 ; space <= n-row; space++)
        {
            printf("_",space);
        }
        for (column = 1; column <=row; column++)
        {
            printf("%d", column);
        } 
        
        printf("\n");
    }
    return 0;
}