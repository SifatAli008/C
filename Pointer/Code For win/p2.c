#include <stdio.h>
int main()
{
    int n,m,sum, dif,mult;
    scanf("%d %d",&n , &m);
   
    int *ptr1 , *ptr2;

    ptr1=&n;
    ptr2=&m;

    sum = *ptr1 + *ptr2;

    printf("sum = %d\n",sum);

   dif = *ptr1 - *ptr2;

   printf("Difference = %d\n",dif);

   mult = *ptr1 * *ptr2;

   printf("Mulit = %d\n",mult);


}