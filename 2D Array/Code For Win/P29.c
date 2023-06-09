// Program to find sum of opposite diagonal elements of a matrix
#include <stdio.h>
int main()
{
  int  n;

  
  scanf("%d", &n);

  int A[n][n];

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      scanf("%d", &A[i][j]);
    }
    printf("\n");
  }

  int sum = 0;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i + j == n - 1)
    {
      sum = sum + A[i][j];
  
    }
    }
  }

  printf("%d", sum);
}