// 26. Program that implements function to perform operations on a MXN matrix:
#include <stdio.h>
int multiFuncation(int m, int n)
{
    int A[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("A[%d][%d]: ",i,j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }

    int multi;

     printf("Multipli by: ");
    scanf("%d",&multi);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",A[i][j]*multi);
        }
        printf("\n");
    }
}


int main()
{
    int m, n;

        printf("Number of row: ");
        scanf("%d",&m);

        printf("Number of column: ");
        scanf("%d",&n);

    multiFuncation(m, n);
}