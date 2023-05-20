// 8-search a number into that array. If
// found then print its index. If not found then print “NOT FOUND”.

#include <stdio.h>

int main()
{

    int n, i, s, f, count = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter elements in array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("\nEnter element to search: ");
    scanf("%d", &s);

    f = 0;

    for (i = 0; i < n; i++)
    {

        if (array[i] == s)
        {
            f = i;
            printf("%d is found at position %d\n", s, f);
            count++;
        }
    }

    if (count == 0)
    {
        printf("\n%d is not found in the array", s);
    }

    return 0;
}