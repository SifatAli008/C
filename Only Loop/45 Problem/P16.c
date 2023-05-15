//Write a program (WAP) that will print Fibonacci series upto Nth terms.
//1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, …….
#include <stdio.h>
int main()
{
    int n;
    int t1 = 0, t2 = 1;
    int nextTerm = t1 + t2;

    scanf("%d", &n);

    printf("1,");

    for (int i = 2; i <= n; ++i)
    {
        printf("%d",nextTerm);
         t1 = t2;
         t2 = nextTerm;
         nextTerm = t1 + t2;

        if (i != n)
        {
            printf(",");
        }
        
    }
    return 0;
}