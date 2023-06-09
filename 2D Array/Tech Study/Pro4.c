//Write C Program to Find the Transpose of a given Matrix.
#include <stdio.h>
int main()
{

    int m, n;

    scanf("%d", &m);
    scanf("%d", &n);

    int A[m][n],B[m][n];

    printf("A\n");

  for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("A[%d][%d]: ",i,j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }

  for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            B[i][j]=A[j][i];
        }
        printf("\n");
    }

  for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

printf("\n");

for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }

}