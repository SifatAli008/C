// 9 Declare a structure of students with three variables (name, id and cgpa). Now take the input of two students and print the information of that student who has better cgpa with a function.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
   char name[100];
   char id[100];
   float cgpa;
} a, b;

void display(struct student se)
{

   printf("Name: %s\n", se.name);
   printf("id: %s\n", se.id);
   printf("Cgpa: %f\n", se.cgpa);
}

int main()
{

   printf("Student 1\n");

   gets(a.name);
   gets(a.id);
   scanf("%f", &a.cgpa);
   getchar();

   printf("Student 2\n");
   gets(b.name);
   gets(b.id);
   scanf("%f", &b.cgpa);

   if (a.cgpa > b.cgpa)
   {
      display(a);
   }
   else
   {
      display(b);
   }

   return 0;
}