//  WAP that will find the maximum number between two numbers using a pointer.
#include <stdio.h>
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);

    int *ptr1 = &m;
    int *ptr2 = &n;

    if (*ptr1 > *ptr2)
    {
        printf("Maximum number: %d", *ptr1);
    }
    else
    {
        printf("Maximum number:%d", *ptr2);
    }
}