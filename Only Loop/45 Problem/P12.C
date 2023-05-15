// Write a program (WAP) that will give the sum of first Nth terms for the following series.
// 1, 4, 9, 16, 25, 36, 49, 64, 81, 100, 121, 144, 169, …….
#include <stdio.h>
int main()
{
    int n, sum = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum = sum + (i * i);
    }
    printf("Result: %d", sum);
}