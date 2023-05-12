#include <stdio.h>
int main()
{
    int r;
    float Pi=3.1416,area;

    printf("Enter the value of the radious: ");
    scanf("%d",&r);

    area=Pi * r * r;
    printf("Area of the Circle: %f",area);
}