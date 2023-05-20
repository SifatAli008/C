#include <stdio.h>
int main ()
{
    int Num[100],i,n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);

    for(i=1;i<n;i++){
     scanf("%d",&Num[i]);
    }

    printf("All the elements Are");
    for(i=1;i<n;i++){
        printf("%d,",Num[i]);
    }

    return 0;
}