//13. check Matrix is a Symmetric Matrix
#include <stdio.h>
int main()

{
    int i, j, n;

    scanf("%d", &n);


    int A[n][n];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

      int B[n][n];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
           B[i][j]=A[j][i];
        }
    }

     for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    int count=0;

     for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
           if (B[i][j]!=A[i][j])
           {
             count++;
           }
        }
    }

    if(count==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
}