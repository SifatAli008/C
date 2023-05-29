// 8.Declare a structure of students with three variables (name, id and cgpa). Now take the input of two students and print the information of that student who has the higher cgpa.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    char name[100];
    char id[100];
    float cgpa;
}a,b;


int main()
{

    printf("Student 1\n");

    gets (a.name);
    gets (a.id);
    scanf ("%f", &a.cgpa);
    getchar ();

    printf("Student 2\n");
    gets (b.name);
    gets (b.id);
    scanf ("%f", &b.cgpa);


    if(a.cgpa > b.cgpa)
    {
       printf("Name: %s\n",a.name);
       printf("id: %s\n",a.id);
      printf("Cgpa: %f\n",a.cgpa);
    }
    else
    {
        printf("Name: %s\n",b.name);
         printf("id: %s\n",b.id);
         printf("Cgpa: %f\n",b.cgpa);
    }


    return 0;
}