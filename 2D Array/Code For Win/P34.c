//Write a C program to find sum of upper triangular matrix.
#include <stdio.h>
int main()
{
    int n;
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

   int sum=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j > i )
            {
                sum=sum+A[i][j];
            }
        }
    }
    
     printf("Sum of upper triangular matrix: %d ",sum);
   
    
}