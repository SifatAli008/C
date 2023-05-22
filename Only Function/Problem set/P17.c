// 17. Function to sort and return an input array in ascending order.
#include <stdio.h>
int ascending(int n)
{
    int a[100];
    int temp, i, j;
    for (i = 0; i < n; i++)
    {
        printf("Enter %d number: ", i + 1);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {

        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])

            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
int main()
{
    int n;
    scanf("%d", &n);

    ascending(n);
}