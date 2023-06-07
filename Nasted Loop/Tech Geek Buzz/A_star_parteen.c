#include <stdio.h>
int main()
{
  int row, column, n;
  scanf("%d", &n);
  int m = n / 2 + 1;
  for (row = 1; row <= m; row++)
  {
    // inside row
    for (column = 1; column <= m; column++)
    // inside
    {
      if ((row == 1 || column == 1) || (row == m || column == M))
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
  for (row = 1; row <= n/2; row++)
  {
    // inside row
    for (column = 1; column <= n/2; column++)
    // inside
    {
      if ((row == 1 || column == 1) || (row == n/2 || column == n/2))
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