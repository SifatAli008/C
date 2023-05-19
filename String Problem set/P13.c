// 13 emove all repeated characters in a string
#include <stdio.h>
int main()
{
    char str1[50];
    gets(str1); // H E L L O

    int i, j, k;

    for (i = 0; str1[i] != '\0'; i++) //0
    {
        for (j = i + 1; str1[j] != '\0'; j++)// 1
        {
            if (str1[i] == str1[j]) // str[i]==str[j] // H == E , H ==  L , H == L , H == O --F 
                                                      // E == L ,  E == L , E == O; --F
                                                      // L == L 3 -- T
                                   
            {
                for (k = j; str1[k] != '\0'; k++)
                {
                    str1[k]  = str1[k + 1] ; // L Replace by O
                   // 3 L  = 3+1 = 4 O
                   // AFTER relpaced 4 = O
                }  
               i--;
            }
        }
    }

    printf("%s\n", str1);  //HELO
}
