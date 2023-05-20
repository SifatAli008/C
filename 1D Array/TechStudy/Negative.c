// neagtive value using array;
// Number neagtive value in array;

#include <stdio.h>
int main ()
{
   int num[100],i,n,count=0;

   printf("Give the number of value:");

   scanf("%d",&n);//

   for(i=0;i<n;i++){
    scanf("%d",&num[i]);//
   }

   printf("Negative elements are:");

   for(i=0;i<n;i++){
       if (num[i]<0)
       {
        printf("%d \n",num[i]);
         count++;
       }
   }
   printf("Number of negative value: %d \n",count);

   


    return 0;
}