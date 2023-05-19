// 15. Write str program in C to reverse the words in str string.
#include <stdio.h>
#include <string.h>
int main()
{
    int k, m, j, l, count = 0;
    char str[100];

    fgets(str, sizeof(str), stdin);
    str[strcspn(str,"\n")]='\0';

    l = strlen(str);

    printf("\n");

    for (int i = l; i >= 0; i--)
    {
        m = k;

        if (str[i] ==' ')
        {
            k = i;
            count++;

            if (count == 1)
            {
                for (j = i + 1; str[j] != '\0'; j++)
                {
                    printf("%c", str[j]);
                }

                printf(" ");
            }
            
            else if (count != 1)
            {
                for (j = k + 1; j < m; j++)
                {
                    printf("%c", str[j]);
                }
                printf(" ");
            }
        }
        
        else if (str[i] == str[0])
        {
            for (j = i; j < k; j++)
            {
                printf("%c", str[j]);
            }
        }
    }

    printf("\n");
}