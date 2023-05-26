// 10. WAP that will calculate the sum of numbers from 1 to n using recursion.#include<stdio.h>
#include <stdio.h>
int recsum(int n);

int main(void)
{
  int n;
  scanf("%d", &n);
  printf("sum: %d", recsum(n));
  return 0;
}

int recsum(int n)
{
  if (n == 0)
  {
    return 0;
  }
  return recsum(n - 1) + n; // (5-1)+5 => (4-1)+4 => (3+1)+4 =>  (2-1)+3 => (1-1)+2=> 1
}