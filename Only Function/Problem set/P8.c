// Function that takes an array of n integer numbers as input and prints them in reverse order.
#include <stdio.h>
int revers(int num[20], int n)
{
    int temp;

    for (int i = n; i >= 1; i--)
    {
        temp = num[i];
        num[i] = num[n - 1 - i];
        num[n - 1 - i] = temp;
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int num[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    revers(num, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", num[i]);
    }
}
