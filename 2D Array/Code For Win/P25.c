// C program to perform Scalar matrix multiplication.
#include <stdio.h>
int main()

{
    int i, j, row, col;

    scanf("%d", &row);

    scanf("%d", &col);

    printf("\n");

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

    int multi;
    int B[row][col];

    printf("Multiplication valu: ");
    scanf("%d", &multi);

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            B[i][j] = A[i][j] * multi;
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
}