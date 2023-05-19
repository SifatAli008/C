// Write str program in C to find the maximum occurring character in str string.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{

    char str[100];

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
  

    strupr(str);

   int count = 0, temp = 0;
   int m;
    for (int i = 0; str[i]!='\0'; i++)
    {
        for (int j = 0; str[j]!='\0'; j++)
        {
            if (str[i] == str[j])
            {
                count++;
            }

            if (count >= temp)
            {
                temp = count;
                m = str[i];
            }
        }
    }
    printf("%c (or %c)", m, tolower(m));
}