//Area of Reactangle
#include<stdio.h>
int areaofRect(int lenght, int breadth)
{
    int area;
    area = lenght * breadth;
    return area;
}

int main()
{
    int l=10, b=5;
    int area = areaofRect(l,b);
    printf("%d\n",area);

    l=50, b=20;
    area = areaofRect(l,b);
    printf("%d\n",area);
}
