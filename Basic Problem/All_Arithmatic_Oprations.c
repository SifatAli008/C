#include <stdio.h>
int main()
{
    int a, b, add, sub, multi, quo;
    float div;

    printf("Give the valu of first  Number:");
    scanf("%d", &a);

    printf("Give the valu of Secend  Number: ");
    scanf("%d", &b);

    printf("\n\n--------------Arithmatic Opration------------------\n\n");

    add = a + b;
    printf("The Addition of two number:%d\n", add);

    sub = a - b;
    printf("The Subtraction of two number:%d\n", sub);

    multi = a * b;
    printf("The Multiplication of two number:%d\n", multi);

    quo = a / b;
    printf("The Quotient of two number:%d\n", quo);

    div = a % b;
    printf("The Divison of two number:%f\n", div);
    return 0;
}