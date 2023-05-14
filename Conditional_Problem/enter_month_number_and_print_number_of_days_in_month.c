#include <stdio.h>
int main()
{
   int a;
   printf("Enter the month number:");
   scanf("%d",&a);

   switch (a)
   {
   case 1:
     printf("%d month is January and the number days is 31",a);
    break;

    case 2:
     printf("%d month is February and the number days is 28 in a common year and 29 in leap years",a);
    break;
   
   case 3:
     printf("%d month is March and the number days is 31",a);
    break;

    case 4:
     printf("%d month is April and the number days is 30",a);
    break;

    case 5:
     printf("%d month is May and the number days is 31",a);
    break;

    case 6:
     printf("%d month is June and the number days is 30",a);
    break;

    case 7:
     printf("%d month is July and the number days is 31",a);
    break;

    case 8:
     printf("%d month is August and the number days is 31",a);
    break;

    case 9:
     printf("%d month is September and the number days is 30",a);
    break;

    case 10:
     printf("%d month is Octaber and the number days is 31",a);
    break;

    case 11:
     printf("%d month is November and the number days is 30",a);
    break;

    case 12:
     printf("%d month is December and the number days is 31",a);
    break;
   default:
      printf("Invalid month number,, please enter a valid month number and try again.");
    break;
   }

    return 0;
}