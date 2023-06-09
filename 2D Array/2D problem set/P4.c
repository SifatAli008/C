#include <stdio.h>
int main()

{
    int i, j, n;

    scanf("%d", &n);

    int A[n][n];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
         printf("\n");
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("Major diagonal: ");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (j == i)
            {
                printf("%d ", A[i][j]);
            }
        }
    }

    printf("\n");
    printf("Minor diagonal: ");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i+j == n-1)
            {
                printf("%d ", A[i][j]);
            }
        }
    }
}