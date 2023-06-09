//Transpose Matrix
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
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    int traspose[i][j];

     for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
           traspose[j][i]=A[i][j];
        }
    }
      printf("\n");

    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
        {
           printf("%d ",traspose[i][j]);
        }
          printf("\n");
    }
}