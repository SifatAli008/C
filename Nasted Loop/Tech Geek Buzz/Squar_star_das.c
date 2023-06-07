#include <stdio.h>
int main()
{
    int row, col, n;

    scanf("%d", &n);

    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n; col++)
        {
            if (  row==1 || col ==1 || row ==n || col ==n || row==n/2+1)
            {
                printf("*");
            }
            else
            {
                printf("_");
            }
        }
        printf("\n");
    }

    return 0;
}