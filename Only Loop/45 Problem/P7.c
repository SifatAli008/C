//Write a program (WAP) that will print following series upto Nth terms.
//1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31 …….
#include <stdio.h>
int main()
{
    int n;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            printf("1");
            if (i != n)
            {
                printf(",");
            }
        }
        if (i % 2 == 0)
        {
            printf("0");
            if (i != n)
            {
                printf(",");
            }
        }
    }
    return 0;
}