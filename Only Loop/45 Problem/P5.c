//Write a program (WAP) that will print following series upto Nth terms.
//1, 4, 9, 16, 25, 36, 49, 64, 81, 100, 121, 144, 169, …….
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d", i * i);

        if (i != n)
        {
            printf(",");
        }
    }
}