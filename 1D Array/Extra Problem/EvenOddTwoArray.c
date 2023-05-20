#include <stdio.h>
int main()
{
    int i, j = 0, k = 0, n;

    printf("enter number of elemnt: ");

    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

      printf("odd ");
    for (i = 0; i < n; i++)
    {
        if(a[i] % 2 != 0 || a[1]==0)
        {
            a[k] = a[i];
            
            printf("%d ", a[k]);
        }
    }

    printf("even ");
    for (i = 0; i < n; i++)
    {
        
        if (a[i] % 2 == 0)
        {
            a[j] = a[i];

            printf("%d ", a[j]);
        }
       
    }
    
  

   

    // for (i = 0; i < n; i++)
    // {
    // printf("%d ", a[j]);
    // printf("%d ", a[k]);
    // }
    // return 0;
}