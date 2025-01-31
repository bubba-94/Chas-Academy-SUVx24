#include <stdio.h>

typedef struct student 
{
    int id;
    char name[40];
}student;

int main ()
{
    student s1;
    student s2;

    printf("ID of student 1: \n");
    scanf("%i", &s1.id);
    printf("Name of student 1: \n");
    scanf("%s", s1.name);
    printf("ID of student 2: \n");
    scanf("%i", &s2.id);
    printf("Name of student 2: \n");
    scanf("%s", s2.name);

    printf("\nStudent number 1: \nID: %i\nName: %s", s1.id,s1.name);
    printf("\n\nStudent number 2: \nID: %i\nName: %s", s2.id,s2.name);
}