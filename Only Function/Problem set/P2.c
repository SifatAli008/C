// Function to print an input character value.
#include <stdio.h>
int output(char a)
{
    return printf("Value received from main: %c", a);
}

int main()
{
    char ch;
    scanf("%c", &ch);
    output(ch);
}