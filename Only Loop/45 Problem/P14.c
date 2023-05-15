//Write a program (WAP) that will calculate the result for the first Nth terms of the following series.  [In that series, dot sign (.) means multiplication]
//1.2 + 2.3 + 3.5 + 4.8 + 5.12 + 6.17 +…….. 
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0,add=0;
    int j=2;

    for (int  i = 1; i <= n; i++)
    {
         
       add = add + j;
       sum = sum + i*add;
       j++;
    }

    printf("Result: %d",sum);
    

    return 0;
}