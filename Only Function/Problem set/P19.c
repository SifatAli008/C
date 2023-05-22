// 19.Function “GeneratePrime()” to compute the prime numbers less than N, where N is an input integer. GeneratePrime() uses IsPrime() to check whether a number is prime or not.
#include <stdio.h>

int Nprime(int num)
{
  for (int j = 1; j <= num; j++)
  {
    for (int i = 2; i < j; i++)
    {
      if (j % i == 0)
      {
        printf("%d ", i);
      }
    }
  }
}

int main()
{
  int n;
  printf("Enter any positive number: ");
  scanf("%d", &n);

  Nprime(n);

  return 0;
}