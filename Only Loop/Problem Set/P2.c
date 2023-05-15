#include <stdio.h>
int main()
{
    int i,n;
    printf("Enter the endpoint number:");
    scanf("%d",&n);
    
    for(i=1; i<=n; i++){
        printf("%d",i);
        
        if(i != n){
           printf(",");
        }
        
    }
    return 0;
}