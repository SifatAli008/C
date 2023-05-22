// 15.Function that finds and returns the minimum value in an array.
#include <stdio.h>
int minmium(int num)
{
    int a[num];

    for (int i = 0; i < num; i++)
    {
        scanf("%d",&a[i]);
    }

    int min = a[0];

    for (int i = 0; i < num; i++)
    {
          if(a[i] < min)    
           min = a[i];    
    }  

   return min;
}

int main()
{
    int n;
    scanf("%d",&n);

 int result = minmium(n);

 printf("min = %d",result);

}