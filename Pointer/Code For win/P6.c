
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int array1[n],array2[n];
    int *ptr1 = array1;
     int *ptr2 = array2;

    for(int i = 0; i<n; i++){

        scanf("%d ",ptr1);

        ptr1++;
    }

    for(int i = 0; i<n; i++){

        scanf("%d ",ptr2);

        ptr2++;
    }

    ptr1 = array1;
    ptr2 = array2;

    printf("Befor\n");

    for(int i = 0; i<n ; i++){

        printf("%d, \n",*ptr1);
        ptr1++;
    }

    for(int i = 0; i<n ; i++){

        printf("%d, \n",*ptr2);
        ptr2++;
    }

   for(int i = 0; i<n ; i++){
     
       int temp = *ptr1;
           *ptr1 = *ptr2;
           *ptr2 = temp;
     
    }
    
    printf("After\n");

    for(int i = 0; i<n ; i++){

        printf("%d, \n",*ptr1);
        ptr1++;
    }

    for(int i = 0; i<n ; i++){

        printf("%d, \n",*ptr2);
        ptr2++;
    }

    

return 0;
    
}