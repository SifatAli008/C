// Write C Program to check whether two matrices are equal or not..
#include <stdio.h>
int main()
{

  int n;
  printf("Enter the N: ");
  scanf("%d", &n);

  int A[n][n], B[n][n];

  printf("A\n");

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      printf("A[%d][%d]: ", i, j);
      scanf("%d", &A[i][j]);
    }
    printf("\n");
  }

  printf("B\n");

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      printf("B[%d][%d]: ", i, j);
      scanf("%d", &B[i][j]);
    }
    printf("\n");
  }
  
  int count = 1;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (A[i][j] != B[i][j])
      {
        count = 0;
        break;
      }
    }
  }

  if (count == 1)
  {
    printf("Array A and B is  Equal\n");
  }

  else
  {
    printf("Array A and B is not  Equal\n");
  }
}