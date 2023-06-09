// C program to interchange diagonals of a matrix
#include <stdio.h>
int main()
{
    int n,  temp;
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

 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                temp = A[i][j];
                A[i][j] = A[i][(n - i) - 1];
                A[i][(n - j) - 1] = temp;
            }
        }
        printf("\n");
    }
       for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}    