// Write a program (WAP) that will print following series upto Nth terms.
// 3, 6, 9, 12, 15, 18, 21, 24, 27, 30, 33, 36, 39, 42 …….
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d", i * 3);

        if (i != n)
        {
            printf(",");
        }
    }
}