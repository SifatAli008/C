//Write a C program to reverse order of words in a given string.
#include <stdio.h>
#include <string.h>
int main()
{
  	char str[100];

  	fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] ='\0'; // s i f a t   a l i 
                                 //  0 1 2 3 4 5 6 7 8

    printf("\n");
  	
     int i, len=0;
     while(str[i]!='\0')
     {
      len++;
      i++;
     }
  	
  	for(i = len - 1; i >= 0;i--) //i = 9-1 = 8  , 8 , 7
	{                               //         7  , 7 , 6
		if(str[i] == ' ')            //          6 ,
		{     5
			str[i] = '\0';
          5
			printf("%s ",&(str[i])+ 1);	
		}                    5
       puts(str);   
	}
  
 
  puts(str);

}
