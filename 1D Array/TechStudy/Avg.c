#include <stdio.h>
int main()

{
   int i, n;
   float avg, num[100], sum = 0;
   scanf("%d", &n);

   for (i = 1; i <= n; i++)
   {
      scanf("%f", &num[i]);
      sum = sum + num[i];
   }
   avg = sum / n;
   
   printf("%.2f", avg);

   return 0;
}