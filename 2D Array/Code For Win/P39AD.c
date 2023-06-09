//sparse matrix Advance.
#include <stdio.h>
int main()
{
    int m, n;

    scanf("%d", &m);
    scanf("%d", &n);

    int i, j, total = 0;

    int A[m][n];

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("A[%d][%d]: ",i,j);
            scanf("%d",&A[i][j]);
        }
         printf("\n");
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {

            if (A[i][j] != 0)
            {
                total++;
            }
        }
    }

    int B[m][n],k=0;

     for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (A[i][j] != 0)
            {
                B[0][k]=i;//row
                B[1][k]=j;//col
                B[2][k]=A[i][j];//value
                k++;
            }
        }
    }
    
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < total; j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
}