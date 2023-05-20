#include <stdio.h>
int main()
{
    int i, n, j ,temp=0;

    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    temp=a[n];

    for (j = n - 1; j > 0; j--)
    {
        a[j] = a[j - 1];
    }
       a[0] = temp;
     

    for (j = 0; j < n-1; j++)
    {
        printf("%d ", a[j]);
    }
     printf ("%d ", a[0]);
    
    
}