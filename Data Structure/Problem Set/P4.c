// Given a structure student, which has three member variables (name, id and cgpa), declare a variable of structure student. Display the value of the member variables.
#include <stdio.h>
#include <string.h>
struct student
{
   char name[50];
   char id[50];
   float cgpa;
};

void display(struct student se)
{
   printf("Name: %s\n", se.name);
   printf("id: %s\n", se.id);
   printf("Cgpa: %f\n", se.cgpa);
}

int main()
{
   struct student serial1;

   display(serial1);

   return 0;
}