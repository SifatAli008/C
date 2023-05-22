//Function to calculate the sum of n numbers coming from the console and stored in an array.
#include <stdio.h>
int add(int n)
{
    int A[n],sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
        sum = sum + A[i];
    }

     printf("Sum In Function:%d \n",sum);

    return sum;
}

int main()
{
    int num;
    printf("Enter the number of value: ");
    scanf("%d", &num);

    int result = add(num);

    printf("Sum In Main:%d \n",result);
}
