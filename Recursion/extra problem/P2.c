//factorial
#include <stdio.h>
int fact(int n);
int main()
{
    int n;
    scanf("%d",&n);

    int result = fact(n);
    printf("Factrioal of %d is %d",n,result);
}

int fact(int n){
     if (n==1){
        return 1;
     }
    else{
       return n*fact(n-1);
    }
}