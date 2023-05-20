#include <stdio.h>
int main()
{
    int num[5],i,sum=0;
  
   printf("Enter a numbers:");
   
    for(i=0;i<5;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<5;i++)
    {
       sum = sum + num[i];
    }
     printf("%d",sum);


    return 0;
}