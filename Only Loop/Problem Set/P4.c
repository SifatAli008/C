#include<stdio.h>
int main()
{
    int n,i;
    float sum =0,x;

    printf("Enter number of elements:  ");
    scanf("%d", &n);
    printf("\nEnter %d elements:", n);

    for(i=0;i<n;i++)
    {
        scanf("%.3f", &x);
        sum += x;
        
    }
    printf("\nAverage of the entered numbers is =  %f", (sum/n));

    return 0;
}
