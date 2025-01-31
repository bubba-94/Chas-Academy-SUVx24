#include <stdio.h>

typedef struct student 
{
    int id;
    char name[40];
}student;

int main ()
{
    int times = 0;
    printf("How many students do you want to enroll?\n");
    scanf("%i", &times);
    student students[times];
    printf("Enroll %i students\n");
    for (int i = 0; i < times; i++)
    {
        printf("ID: \n");
        scanf("%i", &students[i].id);
        printf("Name: \n");
        scanf("%s", students[i].name);
    }

    for (int i = 0; i < times; i++)
    {
        printf("\n--Student %i--", i+1);
        printf("\nID: %i\tName: %s", students[i].id, students[i].name);
    }
}