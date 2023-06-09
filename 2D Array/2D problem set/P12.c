//12.WAP that will take (m x n) integer inputs into a matrix of dimension m x n. Now reverse that matrix within itself and display it. Reversal means swap 1st column with the nthcolumn, swap 2nd column with the (n-1)th column and so on…
#include <stdio.h>
int main()
{
    int a[20][20], j, i, n, m, temp;
    scanf("%d %d", &m, &n);


    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int  x = n - 1;

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            temp = a[i][j];
            a[i][j] = a[i][x - j];//2-0=2 ,2-1=1 2-2=0,, 0 2 0 1 0 0  
            a[i][x - j] = temp;
        }
    }

    for (i = 0; i < m; i++)
    {
        for (j = n - 1; j >= 0; j--)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
return 0;
}