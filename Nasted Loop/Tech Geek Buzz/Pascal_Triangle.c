#include <stdio.h>
int main()
{
  int row, column, space, n;

  scanf("%d", &n);

  for (row = 1; row <= n; row++)
  {
    for (space = row; space <= n; space++)
    {
      printf("  ", space);
    }
    for (column = row; column <= row + row - 1; column++)
    {
      printf("%d ", column);
    }
    for (column = row + row - 1; column >= row + 1; column--)
    {
      printf("%d ", column-1);
    }
    printf("\n");
  }

  return 0;
}