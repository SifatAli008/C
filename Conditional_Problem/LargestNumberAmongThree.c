#include <stdio.h>
int main()
{
    int a, b, c;

    printf("Enter the number of First value: ");
    scanf("%d", &a);

    printf("Enter the number of Secend value: ");
    scanf("%d", &b);

    printf("Enter the number of Thrid value: ");
    scanf("%d", &c);

    if (a >= b && a >= c)
    {
        printf("First value is  Lergest on: %d.", a);
    }
    else if (b >= c && b >= a)
    {
        printf("First value is  Lergest on: %d.", a);
    }

    else if (c >= a && c >= b)
    {
        printf("Third value is  Lergest on: %d.", c);
    }

    else
    {
        printf("error");
    }
    return 0;
}