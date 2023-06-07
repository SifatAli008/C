#include <stdio.h>
int main()
{
   int row, column, n;

   scanf("%d", &n);

   for (row = 1; row <= n; row++)
   {
      for (column = 1; column <= row; column++)
      {
         if (row == 1 || row == n || column == 1 || row == column)
         {
            printf("* ", column);
         }
         else
         {
            printf("  ");
         }
      }
      printf("\n");
   }
   return 0;
}
