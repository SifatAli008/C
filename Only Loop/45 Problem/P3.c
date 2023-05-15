//Write a program (WAP) t2hat will print following series upto Nth terms.
//2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, …….
#include <stdio.h>
int main()
{
    int n;

    scanf("%d", &n);

    int even = 2 * n ;

    for (int i = 1; i <= even; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d", i);
            if (i != even)
            {
                printf(",");
            }
        }
    }
    return 0;
}