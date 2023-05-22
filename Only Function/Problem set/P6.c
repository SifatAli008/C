//6. Function to calculate the sum of n numbers coming from the console.
#include <stdio.h>

int sumNum(int n)//3
{
    int i, sum = 0, num = 0;

    for (i = 1; ; i++)
    {
        scanf("%d", &num);
        sum = sum + num;

            printf("Sum In Function:%d\n", sum);

    }
    return  printf("Sum In Main:%d\n", sum);
}

int main()
{
    int n;
    sumNum(n);
}



















