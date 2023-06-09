#include <stdio.h>
int main()
{

    int n;
    printf("Enter the N: ");
    scanf("%d", &n);

    int A[n][n], C[n][n];

    printf("A\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("A[%d][%d]: ",i,j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }
    
    printf("B\n");
    int  B[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {   
            printf("B[%d][%d]: ",i,j);
            scanf("%d", &B[i][j]);
        }
        printf("\n");
    }

    printf("\n\n\nResult:\n");

      int  sum = 0;

    for (int i = 0; i < n; i++)
    {
         sum=0;
        for (int j = 0; j < n; j++)
        {
            C[i][j] = 0;

            for (int k = 0; k < n; k++)
            {
                C[i][j] = A[i][j] * B[j][i];
            }
            sum = sum + C[i][j];
        }

        for (int l = 0; l < n; l++)
        {
            printf("%d ", sum);
        }

        printf("\n");
    }
}