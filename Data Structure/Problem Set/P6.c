// Given a structure student, which has three member variables (name, id and cgpa), declare a variableof structure student.Assign values to the member variables.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

     struct student{
            char name[100];
            char id[100];
            float cgpa;
        };


int main()
{
    int n;
    printf("Enter The number of student: ");
    scanf("%d", &n);

     struct student serial[n];


    for (int i = 0; i < n; i++)
    {

        printf("Student %d\n", i + 1);

        printf("Name: ");
        fflush(stdin);
        gets(serial[i].name);

        printf("ID: ");
        fflush(stdin);
        gets(serial[i].id);

        printf("CGPA: ");
        scanf("%f", &serial[i].cgpa);

        printf("\n");
    }

    for (int i = 0; i < n; i++)
    {
        printf("Student %d\n", i + 1);
        printf("Name: %s\n", serial[i].name);
        printf("id: %s\n", serial[i].id);
        printf("Cgpa: %f\n", serial[i].cgpa);
        printf("\n");
    }

    return 0;
}