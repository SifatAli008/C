#include <stdio.h>
int main()
{
    int a, b, c, LargestNumber;

    printf("Enter the number of First value: ");
    scanf("%d", &a);

    printf("Enter the number of Secend value: ");
    scanf("%d", &b);

    printf("Enter the number of Thrid value: ");
    scanf("%d", &c);

    LargestNumber = a > b ? (a > c ? a : c) : (b > c ? b : c);

    printf(" The Largest number is : %d", LargestNumber);

    return 0;
}