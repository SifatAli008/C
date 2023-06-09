//8. maximum element with index location from that matrix
#include <stdio.h>
int main()

{
    int i, j, n, m;

    scanf("%d", &m);

    scanf("%d", &n);

    int A[m][n];

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    int max = 0;

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (A[i][j] > max)
            {
                max = A[i][j];
            }
        }
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (max == A[i][j])
            {
                printf("\nMax: %d", max);
                printf("\nLocation: A[%d][%d]", i, j);
            }
        }
    }
}