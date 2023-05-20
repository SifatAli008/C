#include <stdio.h>
int main()
{
    int num[5], i, sum=0;

    for (i = 1; i <= 5; i++)
    {
        scanf("%d",&num[i]);

        if (num[i] % 2 != 0)
        {
          int odd = num[i];
          sum+=odd;
        }
    }

    printf("%d", sum);

    return 0;
}