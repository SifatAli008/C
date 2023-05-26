//WAP that will display  n number to 1 using recursion useing in reverse order.
#include<stdio.h>
void fun(int n)
{
    if(n==0)
    {
      return ;
    }
    else
    {
      printf("%d ",n);
      return fun(n-1);
    }
}  

int main()
{
    int n;
    scanf("%d",&n);
    fun(n);
    return 0;
}