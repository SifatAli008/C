#include <stdio.h>
int main()
{

    int n;

    scanf("%d", &n);

    int arr[n];

    for (int j = 0; j < n; j++)
    {
        scanf("%d", &arr[j]);
    }

    int arr2[n];

    for (int i = 0; i < n; i++)
    {
        arr2[i] = arr[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}