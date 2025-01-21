#include <stdio.h>

struct date 
{
    int dd;
    int mm;
    int yyyy;
};

typedef struct emp 
{
    int no;
    char name[30];
    struct date join_date;
}emp;

int main()
{
    emp empOne;
    printf("Enter in this order (with spaced in between): Employee number, name, date of joining (DD-MM-YYYY)");
    scanf("%i %s %i %i %i", &empOne.no,empOne.name,&empOne.join_date.dd,&empOne.join_date.mm,&empOne.join_date.yyyy);

    printf("Employee number: %i\n", empOne.no);
    printf("Employee name: %s\n", empOne.name);
    printf("Employee number: %i-%i-%i\n",empOne.join_date.dd, empOne.join_date.mm, empOne.join_date.yyyy);
}
