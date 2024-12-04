#include <stdio.h>

typedef struct student
{
    int id;
    char firstName[20];

}student;

int main()
{
    student arr[] = {123,"Kim", 321 , "Brad", 231, "Joe"};
    for (int i = 0; i < 3; i++)
    {
        printf("---Student %i---\n", i+1);
        printf("ID: %d\tName: %s\n",arr[i].id, arr[i].firstName);
    }
}