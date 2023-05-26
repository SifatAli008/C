// C program to print even or odd numbers in given range using recursion.
#include <stdio.h>
void even(int m, int n)
{
    if (m > n)
    {
        return;
    }
    else
    {
        printf("%d ", m);
        even(m + 2, n);
    }
}

void odd(int m, int n)
{

    if (m > n)
    {
        return;
    }
    else
    {
        printf("%d ", m);
        odd(m + 2, n);
    }
}

int main()
{
    int start = 1, n;
    int end;
    scanf("%d", &end);
    even(2, end);
    printf("\n");
    odd(start, end);
}