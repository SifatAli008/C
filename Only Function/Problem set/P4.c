// Function to determine if a number is positive, negative or zero.
#include <stdio.h>
int check(int a)
{
   int value;

   if (a < 0)
   {
      value = 0;
   }
   else if (a > 0)
   {
      value = 1;
   }
   else
   {
      value = 2;
   }
   return value;
}

int main()
{
   int num;
   scanf("%d", &num);

   int result = check(num);

   if (result == 0)
   {
      printf("negative");
   }
   else if (result == 1)
   {
      printf("positive");
   }
   else if (result == 2)
   {
      printf("zero");
   }
}