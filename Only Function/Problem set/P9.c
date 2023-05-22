//9.Function to calculate the factorial of a number.
#include <stdio.h>
int factorial(int num);
int main()
{
  int n;
  scanf("%d", &n);

  int result = factorial(n);

  printf("%d", result);
}

int factorial(int num)
{
  int multi = 1;
  int sum;
  for (int i = num; i > 1; i--)
  {
    multi = multi * i;
    sum = multi;
  }

  return sum;
}
