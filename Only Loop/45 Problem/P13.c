//Write a program (WAP) that will calculate the result for the first Nth terms of the following series.  [In that series sum, dot sign (.) means multiplication]
//12.2 + 22.3 + 32.4 + 42.5 + …….
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    int j=1;

    for (int  i = 1; i <= n; i++)
    {
        j++;
       sum = sum + i*i*j;
    }

    printf("Result: %d",sum);
    

    return 0;
}