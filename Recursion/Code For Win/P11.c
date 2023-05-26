// Write a C program to print all natural numbers between 1 to n using recursion.#include <stdio.h>
#include <stdio.h>
void rec(int n)
{
    if (n == 0) // n //rec(1-1);
    {
        return;
    }

    else
    {
        rec(n - 1); // 5-1= rec(4), rec(4-1)=3 , rec(3-1)= rec 2, rec(2-1)=1
                    // 1 2 3 4 5
    }
    printf("%d ", n);
}

int main()
{
    int n;
    scanf("%d", &n);
    rec(n);
    return 0;
}