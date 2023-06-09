//Write C Program to Find the Frequency of Odd & Even Numbers in the given Matrix
#include <stdio.h>
int main()
{

    int m,n;
    scanf("%d", &m);
    scanf("%d", &n);

    int A[m][n];

    printf("A\n");

    int even = 0;
    int odd = 0;

   int i,j;
    for (i = 0; i < m; i++)
    {
            for (j = 0; j < n; j++)
            {
                 scanf("%d", &A[i][j]);
                 if ((A[i][j] % 2) == 0)
                 {
                     even++;
                 }
                 else{
                     odd++;
                 }
             }
    }

        printf("The given matrix is \n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            printf(" %d", A[i][j]);
        }
        printf("\n");
    }

    printf("The frequency of occurance of odd number  = %d\n", odd);
    printf("The frequency of occurance of even number = %d\n", even);
}   