#include <stdio.h>
int main()
{ 
    char ch;
    printf("Enter a charecter: ");
    scanf("%c",&ch);
    
    ch>='a' && ch<='z' || ch>='A' && ch<='Z' ? printf("Provided charecter is a Alphabat"):printf("Provided charecter is not a Alphabat");

    return 0;
}