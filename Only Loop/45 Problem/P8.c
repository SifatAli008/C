//Write a program (WAP) that will print following series upto Nth terms.
//2, 6, 12, 20, 30, 42, 56, 72, 90, 110, 132, 156, 182, …….
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum = sum+(i+i);
        printf("%d",sum);
        if(i!=n){
         printf(",");
        }
    }
}