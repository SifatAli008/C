// Write a C program to multiply two matrices.
#include <stdio.h>
int main()
{

    int n;
    printf("Enter the N: ");
    scanf("%d", &n);

    int A[n][n];

    printf("A\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }

    printf("B\n");
    int B[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
        printf("\n");
    }

    printf("\n\n\nResult:\n");

    int sum = 0;
    int C[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum = 0;
            for (int k = 0; k < n; k++)
            {
                sum = sum + A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    printf("\n");
}