#include <stdio.h>
int main(){
   int a,b,c;

    printf("Enter the number of First value: ");
    scanf("%d", &a);

    printf("Enter the number of Secend value: ");
    scanf("%d", &b);

    printf("Enter the number of Thrid value: ");
    scanf("%d", &c);
    
    if(a>=b){  
       if(a>=c){
        printf("First valu is greater: %d",a);
       }
       else{
        printf("Third valu is greater: %d",c);
       }
    }
    else{
         if(b>=c){
        printf("Secend valu is greater: %d",b);
       }
       else{
        printf("Third valu is greater: %d",c);
       }
    }

    return 0;
}