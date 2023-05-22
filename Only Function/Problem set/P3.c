// Function to determine if a number is even or odd.
#include <stdio.h>
int EvenOrOdd(int a)
{
    int value;

    if (a % 2 == 0)
    {
        value=0;
    }

    else if (a % 2 != 0)
    {
        value=1;
    }
    return value;
}

int main()
{
    int num;
    scanf("%d", &num);

    int result = EvenOrOdd(num);
    if (result == 1)
    {
        printf("Odd");
    }
    
    else if (result == 0)
    {
        printf("even");
    }
}
