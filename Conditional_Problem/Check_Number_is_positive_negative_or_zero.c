#include <stdio.h>
int main()
{
    int num;
    
    printf("Enter a intager Number:");
    scanf("%d", &num);
    
    if(num>0){
        printf("%d is a Positive Number.", num);
    }
    else if(num<0){
        printf("%d is a Negative Number.", num);
    }
    else if(num==0){
        printf("%d is a Zero Number.", num);
    }
    else{
        printf("Invalid input");
    }
    return 0;
}