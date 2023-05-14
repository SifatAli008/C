#include <stdio.h>
int main()
{
   char ch;
   printf("Enter a charter ");
   scanf("%c", &ch);
   if (ch >= 'a' && ch <= 'z')
   {
      printf("lowwer case charter");
   }
   else if (ch >= 'A' && ch <= 'Z')
   {
      printf("Upper case charter");
   }
   else
   {
      printf("Unvalid Input");
   }
   return 0;
}