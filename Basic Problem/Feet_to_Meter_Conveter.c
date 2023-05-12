#include <stdio.h>
int main()
{
    float fe, meters;
    printf("Give the valu of feet:");
    scanf("%f", &fe);

    meters = fe / 3.2808399;
    printf("%.3f Feet = %.3f meters", fe, meters);

    return 0;
}