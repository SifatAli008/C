#include <stdio.h>
int main()
{
    int n;
    
    scanf("%d ", &n);
    int array[n][n];

    int sum = 0;
    
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            scanf("%d ", &array[row][col]);
        }
    }

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if ((row == n / 2 )                ||
                (row > n / 2 && col == 0)      ||   
                (row < n / 2 && col == n / 2)  ||
                (row < n / 2 && col == n - 1)  ||
                (row == n - 1 && col >= n / 2) ||
                (row == 0 && col <= n / 2)     ||
                (row > n / 2 && row < n - 1 && col == n / 2))
            {
                sum += array[row][col];
            }
        }
    }

    printf("Sum= %d", sum);
}