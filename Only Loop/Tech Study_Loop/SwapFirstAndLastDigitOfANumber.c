#include <stdio.h>
int main()
{   
    int i,n,num;
    printf("Enter the last Number: ");
    scanf("%d",&n);

    for(; n>0; i/10){
       num=n%10;
       printf("%d",num);
    }

        

    return 0;
}