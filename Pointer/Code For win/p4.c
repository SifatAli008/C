//C program to input and print array elements using pointers
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int array[n];
    int *ptr = array;

    for(int i = 0; i<n; i++){

        scanf("%d ",ptr);
        ptr++;
    }

    ptr = array;

    for(int i = 0; i<n ; i++){

        printf("%d,",*ptr);
        ptr++;
    }

return 0;
    
}