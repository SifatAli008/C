#include <stdio.h>
int main()
{
    char ch;
    printf("Enter your Alphabet value: ");
    scanf("%c", &ch);

            ch == 'a' || ch == 'A' ||
            ch == 'e' || ch == 'E' ||
            ch == 'i' || ch == 'I' ||
            ch == 'o' || ch == 'O' ||
            ch == 'u' || ch == 'U'
        ? printf("%c is a Vowel Alphabet", ch)
        : printf("%c is not a Consonant Alphabet", ch);

    return 0;
}