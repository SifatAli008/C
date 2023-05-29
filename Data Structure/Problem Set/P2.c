// Declare a structure of students with three member variables (name, id and cgpa), where name is a string and id are strings, and cgpa is a float value with default values.

#include <stdio.h>
#include <string.h>
struct student
{
   char name[50];
   char id[50];
   float cgpa;
};

int main()
{

   struct student serial1;

   strcpy(serial1.name, "Alif");
   strcpy(serial1.id, "111222333");
   serial1.cgpa = 3.55;

   printf("Name: %s\n", serial1.name);
   printf("id: %s\n", serial1.id);
   printf("Cgpa: %.3f\n", serial1.cgpa);

   return 0;
}
