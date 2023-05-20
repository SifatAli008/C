//uniqe nuber useing count
#include <stdio.h>
int main()
{
    int i, j, n;

    int times = 0; 


    printf("enter number of elemnt: ");

    scanf("%d", &n);

    int num[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    for (i = 0; i < n; i++)
    {
        
        int count = 0;

        for (j = 0; j < n; j++)
        {
            if (i != j)
            times++;
            {
                if (num[i] == num[j])
                {
                    count++;
                    
                }
            }
        }

         times=1;

        if(times>1){
         printf("%d occures %d times \n", num[i], times);
        }

        if (count == 0)
        {   
            printf("%d occures %d times \n", num[i], times);
        }
        
    }

    return 0;
}