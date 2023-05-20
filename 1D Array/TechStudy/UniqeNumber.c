#include <stdio.h>
int main()
{
    int i, j, n;

    printf("enter number of elemnt: ");

    scanf("%d", &n);

    int num[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    for (i = 0; i < n; i++)
    {
        int count = 0;
        for (j = 0; j < n; j++)
        {
            if (i != j)
            {
                count++;
            }
            if (count == 0)
            {
                printf("%d", num[i]);
            }
        }
    }

    return 0;
}