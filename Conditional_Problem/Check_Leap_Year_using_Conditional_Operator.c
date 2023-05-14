#include <stdio.h>
int main()
{
    int Year;
    
    printf("Enter the valu of year: ");
    scanf("%d", &Year);

   Year % 4 == 0 ? printf("Year is a Leap_Year: %d",Year) : printf("Year is not a Leap_Year : %d",Year);
    
    
    return 0;
}