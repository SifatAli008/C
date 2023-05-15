#include <stdio.h>
int main()
{
    int num,temp;
    printf("Enter the number Number:  ");
    scanf("%d",&num);
    
    for (; num > 0; num=num/10)
    {
       temp=num%10;
        printf("%d",temp);                            
    } 
    return 0;
}

