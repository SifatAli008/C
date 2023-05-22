//Function that takes two numbers as input and determines if the first number is greater than, equal to or less than the second number.
#include <stdio.h>
int maximum();
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int result = maximum(a,b);
    if (result == 1)
    {
        printf("%d is greater than %d ",a, b);
    }
    if (result == 2)
    {
        printf("%d is less than %d ",a, b);
    }
    if(result == 3)
    {
        printf("%d is eqauil to %d ",a, b);
    }
}

int maximum(int num1, int num2)
{
    int value;
    if (num1 > num2)
    {
        value = 1;
    }
    else if (num1 < num2)
    {
        value = 2;
    }
    else
    {
        value = 3;
    }

    return value;
}

