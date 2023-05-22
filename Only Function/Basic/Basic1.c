//Sum of two values
#include<stdio.h>
int addititon(int FirstValue, int SecondValue)<--
{             // formal parameter, formal parameter
    int sum;
    
    sum = FirstValue + SecondValue;
    return sum;
}       //This is the way how you define a funtion .
       //It is important to mention both data type and name of parameters.

int main()
{
    int a=10, b=5;--->
    // actuall parameter, actuall parameter


    int sum = addititon(a,b);
    printf("%d\n",sum);

    a=50, b=20;
    sum = addititon(a,b);// This is the way call a function.
                         //while calling a function,you should  not mention the return tupe of the function.

                         //Also you should not mention the data types of the argumrnts.

    printf("%d\n",sum);
}
