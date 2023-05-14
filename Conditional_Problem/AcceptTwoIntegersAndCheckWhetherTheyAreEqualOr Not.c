#include <stdio.h>
int main()
{
    int a,b;

    printf("Enter the First Number:");
    scanf("%d",&a);

    printf("Enter the Second Number:");
    scanf("%d",&b);

    a == b ? printf("First Number and Second Number is equal.") : printf("First Number and Second Number is not equal.");
 
    return 0;
}