#include <stdio.h>
int main()
{
    int i, n, sum;

    printf("enter number of elemnt: ");

    scanf("%d", &n);

    int num[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    for (i = 0; i < n; i++)
    {
        sum += num[i];
    }
printf("%d", sum);

return 0;
}