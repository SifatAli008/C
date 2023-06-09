// Write a C program to find transpose of a matrix.
#include <stdio.h>
int main()
{
    int m, n;
    scanf("%d", &m);
    scanf("%d", &n);

    int A[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }

    int B[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            B[i][j] = A[j][i];
        }
        printf("\n");
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
}