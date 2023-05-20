//WAP that will take n positive integers into an array A. Now find all the integers that are 
//divisible by 3 and replace them by -1 in array A. Finally show all elements of array A.
#include <stdio.h>
int main()
{

    int n, i, j;

    printf("Enter the array size:");
    scanf("%d", &n);

    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        if(a[i]==3  || a[i]%3 ==0){
         printf(" -1 ");
       }
        else{
          printf(" %d ",a[i]);
        }
   } 
 return 0;
}