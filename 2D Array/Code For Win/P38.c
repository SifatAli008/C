//C program to check Identity matrix.
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

int count=1;

     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i==j ){
               count==0;
            }
        }
        printf("\n");
    }

   if(count==1)
    {
      for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
      printf("\nThe given matrix is an Identity Matrix.\n");
    }
    
       else
    {
        printf("The given matrix is not Identity Matrix");
    }
    
}


