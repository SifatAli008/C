// Given a structure student, which has three member variables (name, id and cgpa), declare a variableof structure student.Assign values to the member variables.

#include <stdio.h>
#include <string.h>

struct student
{
    char name[100];
    char id[100];
    float cgpa;
};

int main()
{

    struct student serial1;

    printf("Name: ");
    fflush(stdin);
    gets(serial1.name);

    printf("ID: ");
    fflush(stdin);
    gets(serial1.id);

    printf("CGPA: ");
    scanf("%f", &serial1.cgpa);

   

    printf("Name: %s\n", serial1.name);
    printf("id: %s\n", serial1.id);
    printf("Cgpa: %.3f\n", serial1.cgpa);
    printf("\n");

    return 0;
}