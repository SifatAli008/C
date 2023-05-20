#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
  
    int vowels;



    char a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%c",&a[i]);
    }

    for (int i = 0; i = n; i++)
    {

        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' ||
            a[i] == 'o' || a[i] == 'u'||a[i] == 'A' || a[i] == 'E' || a[i] == 'I' ||
            a[i] == 'O' || a[i] == 'U')
        {

            ++vowels;
        }
    }

    printf("Vowels: %d", vowels);

    return 0;
}