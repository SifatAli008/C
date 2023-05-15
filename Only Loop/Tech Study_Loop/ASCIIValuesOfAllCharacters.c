#include <stdio.h>
int main()
{
    char last;
    printf("Enter the last character: ");
    scanf("%c", &last);

    for (int i = 0; i <= last; i++)
    {
        printf("ASCII value of the characters %d : %c \n", i, i); // first i print the ASCII value and the sacend i print the character;
    }
    return 0;
}

// this code also can be solve with the following----
// printf("ASCII value of the characters %i : %c \n", i, i);

//%i work similar like %d but in case of scanf it work differently,,,
//%i take input for octal , hexadecimal type...