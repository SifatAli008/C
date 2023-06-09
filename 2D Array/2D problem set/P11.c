//11. pattern (consider only the boxed position during the sum)
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
    printf("\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (( i%2!=0) || (j%2!=0))
            {
                sum = sum + A[i][j];
            }
        }
    }
    printf("\n");

    printf("%d ", sum);
}