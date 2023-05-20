#include <stdio.h>
int main()
{
    int i,j, n,temp;

    printf("Enter Number of Elment: ");

    scanf("%d", &n);

    int num[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {

            if (num[j] > num[j + 1])
            {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d", num[i]);
    }
    return 0;
}