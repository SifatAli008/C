//18. Function “IsPrime()” to determine whether a number is count or not.
#include <stdio.h>
void prime(int num){
int  count=1;

   for(int i=2;i<num;i++)
    {
        if(num%i==0){
            count==0;
           break;
        }
    }

     if(count==0 && num!=1){
           printf("Prime");
        }
        
    else{
            printf("Not Prime");
        }

}

int main()
{
    int n;
    printf("Enter any positive number: ");
    scanf("%d",&n);

   prime(n);

    return 0;
}


