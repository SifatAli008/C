//WAP that will display numbers 1 to 10 using recursion.
#include<stdio.h>
void rec(int);

int main()
{
    int n;
    scanf("%d",&n);
    printf("Numbers from 1 To %d are: ",n);
    rec(n);
    return 0;
}

void rec(int n)
{
    if(n==0){
        return; 
     }
    else{
        rec(n-1);
    }

   printf("%d ", n);
}