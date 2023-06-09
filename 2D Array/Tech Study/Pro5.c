//Write C Program to Find sum of each row and columns of a matrix
#include <stdio.h>
int main()
{

    int m,n;
    scanf("%d", &m);
    scanf("%d", &n);

    int A[m][n], B[m][n];

    printf("A\n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }

    int row;
    for (int i = 0; i < m; i++)
    {
               row = 0;
        for (int j = 0; j < n; j++)
        {
            row = row + A[i][j];
        }
        printf("Sum of elements of rows %d = %d\n",i+1, row);
    }

    int col;
    for (int i = 0; i < m; i++)
    {
               col=0;
        for (int j = 0; j < n; j++)
        {
            col = col + A[j][i];
        }
        printf("Sum of elements of columns %d = %d\n",i+1, col);
    }
}
