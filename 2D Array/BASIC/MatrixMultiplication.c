// Matrix multiplication..

#include <stdio.h>
int main()
{
    int i, j, row1, col1;
    int row2, col2;

    printf("Enter the value of row and column of 1st Matrix: ");
    scanf("%d", &row1);
    scanf("%d", &col1);

    printf("Enter the value of row and column of 2nd Matrix: ");
    scanf("%d", &row2);
    scanf("%d", &col2);

    while (col1 != row2)
    {
        printf("Error! column of first matrix not equal to row of second.");
             printf("\n");
             
        printf("Enter the value of row and column of 1st Matrix: ");
        scanf("%d", &row1);
        scanf("%d", &col1);

        printf("Enter the value of row and column of 2nd Matrix: ");
        scanf("%d", &row2);
        scanf("%d", &col2);
    }

    int A[row1][col1];

    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\n...B Matrix...\n");

    int B[row2][col2];

    for (i = 0; i < row2; i++)
    {
        for (j = 0; j < col2; j++)
        {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    printf("\n");

    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for (i = 0; i < row2; i++)
    {
        for (j = 0; j < col2; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    int C[i][j];
    int k;
    int sum = 0;
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col2; j++)
        {
            for (k = 0; k < col1; k++)
            {
                sum = sum + (A[i][j] * B[i][j]);
            }

            C[i][j] = sum;
            sum = 0;
        }
    }

    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col2; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}