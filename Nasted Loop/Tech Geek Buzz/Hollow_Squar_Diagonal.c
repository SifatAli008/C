#include <stdio.h>
int main()
{
    int row, col, n;
    scanf("%d", &n);

    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n-2; col++)
        {
                printf("* ", col);
           
        }
        printf("\n");
    }

    return 0;
}