#include <stdio.h>
int main()
{
    int num, total;

    printf("Enter some number: ");
    scanf("%d", &num);

    for (total = 0; num > 0; num = num / 10)
    {                               // Reminder
        total = total + (num % 10); // sum
    }
    printf("Total : %d", total);

    return 0;
}

// Two setp proces
// setp-1 : The "num%10" Division;
// setp-2 : The "num/10" Quotient