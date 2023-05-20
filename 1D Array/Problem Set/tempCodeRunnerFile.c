#include <stdio.h>
int main()
{
   
    int n;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
     
    printf("Array in reverse order: ");
     

     int arr2[n];

    for(int i = n-1; j>=0; j--)
    {
        arr2[i] == arr[i];
    }

     for(int i = n-1; j>=0; j--)
    {
        printf("%d",arr2[i]);
    }


    return 0;
}