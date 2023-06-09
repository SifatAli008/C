// Sum of diagonal elements of a matrix
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

    printf("\n");

    int sum=0;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if(A[i]==A[j]){
           sum=sum+A[i][j];
            }
        }
    }
  
     printf("%d ", sum);
    
}