//left rotate 
#include <stdio.h>
int main()
{
    int i, n, j,temp;

    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }

          temp = a[0];//1
    for (j = 0; j < n - 1; j++)
    {
        a[j] = a[j + 1];
        a[n] = temp;//1
        
    }

    for (j = 0; j < n-1; j++)
    {
        printf("%d ", a[j]);//2 3 4 5
    }
       printf("%d ", a[n]);// 1
}