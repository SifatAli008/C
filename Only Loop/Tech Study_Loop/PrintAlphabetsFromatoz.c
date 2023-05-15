#include <stdio.h>
#include <ctype.h> //Ctypes libarey for  use for testing and mapping characters.
int main()

{
    char ch, i;
    printf("Enter the ending character: ");
    scanf("%c", &ch);

    for (i = 'a'; i <= tolower(ch); i++)
    { // tolower( ) for convert Upper charecter to lower charecter.
        printf("%c", i);
        if (i != ch)
        {
            printf(",");
        }
    }

    return 0;
}
