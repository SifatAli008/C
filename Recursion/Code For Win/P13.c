// Write a C program to find sum of all natural numbers between 1 to n using recursion.
#include <stdio.h>
int rec(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return rec(n - 1) + n;
}

int main()
{
    int n, sum;
    scanf("%d", &n);
    sum = rec(n);
    printf("%d", sum);
    return 0;
}