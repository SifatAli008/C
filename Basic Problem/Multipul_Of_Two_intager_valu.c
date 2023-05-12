#include <stdio.h>
int main()
{
    float a, b, Multipal;

    printf("Give the valu of first float Number:");
    scanf("%f", &a);

    printf("Give the valu of Secend float Number: ");
    scanf("%f", &b);

    Multipal = a * b;
    printf("The Multiplication of two float valu:%f\n", Multipal);

    return 0;
}