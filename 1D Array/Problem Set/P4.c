#include <stdio.h>
int main()
{
    int i,j,n;
      
    printf("Size of Array: ");
    scanf("%d",&n);

    int array[n];
    
    for(i=0;i<n;i++){
       scanf("%d",&array[i]);
    } 

    for(j=0;j<n;j++){
        printf("");
    }

    return 0;
}