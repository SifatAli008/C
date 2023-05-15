//Write a program (WAP) that will print following series upto Nth terms.
//1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31 …….
#include <stdio.h>
int main()
{
    int n;

    scanf("%d", &n);

    int odd = 2 * n - 1;

    for (int i = 1; i <= odd; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d", i);
            if (i != odd)
            {
                printf(",");
            }
        }
    }
    return 0;
}