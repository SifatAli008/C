// C program to check symmetric matrix
#include <stdio.h>
int main()
{
    int  n;
   
    scanf("%d", &n);

    int A[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }

    int B[n][n], count = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            B[i][j] = A[j][i];
        }
        printf("\n");
    }


   for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(A[i][j] == B[i][j]);
            {
                count==0;
                break;
            }
        }
        printf("\n");
    }

    if (count==1)
    {
        printf("symmetric.\n");

        for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    }

    else
    {
        printf("not symmetric");
    }
}