// Write a C program to find reverse of any number using recursion.
#include <stdio.h>
void revRec(int a)
{
    if(a==0)
    {
        return;
    }
    printf("%d ",a);
    revRec(a-1);
}

int main()
{
    int n;
    scanf("%d",&n);
    revRec(n);
}