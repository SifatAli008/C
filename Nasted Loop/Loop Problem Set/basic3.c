#include <stdio.h>
int main()
{
      int row, column, count = 1, n;

      scanf("%d", &n);

      for (row = 1; row <= n; row++)
      {
            for (column = 1; column <= row ; column++)
            {
                  printf("%d ", column++);
                  
            }
            printf("\n");
      }
      return 0;
}