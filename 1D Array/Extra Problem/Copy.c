#include <stdio.h>
int main()
{

    int i, n;

    scanf("%d", &n);

    int num1[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d",&num1[i]);
    }

    int num2[n];

    for (i = 0; i < n; i++)
    {
        num2[i] = num1[i];
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ",num2[i]);
    }

    return 0;
}