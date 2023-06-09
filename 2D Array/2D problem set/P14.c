//WAP that will take (m x n) positive integer inputs into a matrix of dimension m x n. Now replace all the duplicate integers by -1 in that matrix. Finally display it.
#include <stdio.h>
int main()
{

    int i, j, k, l, m, n;
    printf("Enter the value of M x N: ");
    scanf("%d %d", &m, &n);

    int arrayOne[m][n];

    // Taking Input
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("arrayOne[%d][%d]: ", i, j);
            scanf("%d", &arrayOne[i][j]);
        }
    }

    // Making Duplicates -1
    for (l = 0; l < m; l++)
    {
        for (k = 0; k < n; k++)
        {
         
            for (i = 0; i < m; i++)
            {
                for (j = 0; j < n; j++)
                {

                    if (l != i || k != j)//
                    {
                        // printf ("arrayOne[%d][%d]==arrayOne[%d][%d]\n", l, k, i, j);
                        if (arrayOne[l][k] == arrayOne[i][j])
                        {
                            arrayOne[i][j] = -1;
                        }
                    }
                    
                }
                printf("\n");
            }
        }
    }

    // printing the value
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d  ", arrayOne[i][j]);
        }
        printf("\n");
    }
}