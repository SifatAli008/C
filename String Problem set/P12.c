// 12. Write a program in C to count occurrences of a word in array string.
#include <string.h>
#include <stdio.h>
int main()
{
    char str1[50];
    char str2[50];
    int array[1000];

    
    fgets(str1,sizeof(str1),stdin);//sifat ali
    str1[strcspn(str1,"\n")]='\0';

    fgets(str2,sizeof(str2),stdin); //ali
    str2[strcspn(str2,"\n")]='\0';
  
    int i = 0,k = 0;

    while(str1[i])//0  1  2  3  4  5  6  7  8

    {                        //0  1  2  3  4  5  6  7  8
        if (str1[i] == ' ') //s  i  f  a  t  _  a  l  i
        {
            array[k++] = i; // k = 1 = 5;
        }
        i++; 
    }

    array[k++] = i; // k = 2 = 6;

    int j = 0 , n;
    int l, found = 0, t = 0;

    for (i = 0; i < k; i++)   //i=0; 0<1
    {
        n = array[i] - j; // n = array[0] - 0; n = array[5] - 6;

        if (n == strlen(str2)) // n == 2
        {
            t = 0;

            for (l = 0; str2[l]; l++) // 0 1 2 
            {
                if (str1[l + j] == str2[l]) // str1[0 + 1] == str1[0]  str1[1 + 2] == str1[1]  str1[2 + 6] == str1[2]
                {
                    t++; 
                }
            }

            if (t == strlen(str2))// 0 1 2
            {
                found++;// 1
            }
        }
        j = array[i] + 1; // j = 0 + 1 = 2 , 
        
    }

    

    printf("%d", found);
}