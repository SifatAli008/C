//C program to find lower triangular matrix.
#include <stdio.h>
int main()
{
    int n, temp;
    scanf("%d", &n);

    int A[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("A[%d][%d]:", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j > i && A[i][j] != 0)
            {
                count++;
            }
        }
    }

    if (count == 0)
    {
        printf("Matrix is lowerr triangular");
    }
    else
    {
        printf("Matrix is not lowerr triangular");
    }
}