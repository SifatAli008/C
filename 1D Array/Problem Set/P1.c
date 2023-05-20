#include <stdio.h>
int main()
{
   
    int i, n, arr[100], j;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
     
    printf("Array in reverse order: ");

    for(j = n-1; j>=0; j--)
    {
        printf("%d ", arr[j]);
    }

    return 0;
}