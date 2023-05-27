//WAP that will add two numbers using pointers.
#include <stdio.h>
int main()
{
    int n,m,sum;
    scanf("%d %d",&n , &m);
   
    int *ptr1 , *ptr2;

    ptr1=&n;
    ptr2=&m;

    sum = *ptr1 + *ptr2;

    printf("sum = %d\n",sum);
}