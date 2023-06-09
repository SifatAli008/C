//02
#include <stdio.h>
int main()

{
    int i, j, row, col;

    scanf("%d", &row);

    scanf("%d", &col);

    int A[row][col];

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }

    printf("Row-wise: ");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", A[i][j]);
        }
    }

    printf("\n");

    printf("Column-wise: ");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", A[j][i]);
        }
    }

    printf("\n");
}