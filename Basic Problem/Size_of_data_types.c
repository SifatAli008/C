#include  <stdio.h>
int main()
{
 int IntagerNumber;
 float  FloatNumber;
 char Chreacter;
 double DoubleNumber;
 long LongNumber;
 short ShortNumber;


 printf("Size of DoubleNumber in bytes: %d\n", sizeof(DoubleNumber));
 printf("Size of IntagerNumber in bytes: %d\n", sizeof(IntagerNumber));
 printf("Size of FloatNumber in bytes: %d\n", sizeof(FloatNumber));
 printf("Size of LongNumber in bytes: %d\n", sizeof(LongNumber));
 printf("Size of ShortNumber in bytes: %d\n", sizeof(ShortNumber));
 printf("Size of Chreacter in bytes: %d\n", sizeof(Chreacter));

    return 0;
}