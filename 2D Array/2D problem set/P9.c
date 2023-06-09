#include <stdio.h>
int main()
{
    int a[20][20];
    int n, i, j, sum = 0;

    scanf("%d", &n);

    int x = 1;
    int y = n - 2;

    // Takeing values//

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1)
            {
                sum = sum + a[i][j];
            }
        }
    }

    for (i = 1; i < n - 1; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (j == x || j == y)
            {
                sum = sum + a[i][j];
            }
        }
        x++;
        y--;
    }

    printf("%d", sum);

    return 0;
}
