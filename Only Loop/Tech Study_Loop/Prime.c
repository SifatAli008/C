#include<stdio.h>
int main()
{
    int i,n, prime=1;
    scanf("%d",&n);
    for(i=2;i<=n-1;i++)
    {
        if(n%i==0){
            prime=0;
            break;
        }
        if(prime==1 && n!=1){
            printf("%d is prime\n",n);
            break;
        }
        else{
            printf("%d is not prime\n",n);
            break;
        }
    }
    return 0;
}
