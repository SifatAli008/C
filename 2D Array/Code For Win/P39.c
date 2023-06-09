//C program to check sparse matrix
#include <stdio.h>
int main()
{
    int m, n;

    scanf("%d",&m);
    scanf("%d",&n);

    int i, j, count=0;

    int A[m][n];

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
  
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            
            if(A[i][j] == 0)
            {
                count++; // 9 6
            }
        }
    }
         // 6     3   3 /2 -- 4
    if(count >= (i * j)/2)
    {
        printf("\nThe given matrix is a Sparse matrix.");
    }
    else
    {
        printf("\nThe given matrix is not Sparse matrix.");
    }
    return 0;
}