// 12. Function to swap two numbers.
#include <stdio.h>
int fun(int x, int y) // local variable
{
    x = 20;
    y = 10;

     printf("Value in func: %d %d", x, y);
}

int main()
{
    int x = 10, y = 20; // orginal value
    fun(x, y);
    printf("\nValue in main: %d %d", x, y);
}