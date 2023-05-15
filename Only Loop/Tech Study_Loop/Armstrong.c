#include<stdio.h>
int main()
{
    int i,rem,sum=0,num;

    printf("Enter some number: ");
     scanf("%d",&num); 
    
    i=num;
     while(i!=0){
        rem=i%10;
        sum=sum + rem*rem*rem;
        i=i/10;
    }
    if(num==sum){
          printf("yes");
    }
    else{
        printf("no");
    }

    return 0;
}