#include <iostream>
#include <cstring>
using namespace std;

struct StructPerson
{
    char name[10];
    int age;
};
class ClassPerson
{
public:
    char name[10];
    int age;
};


int main()
{
    StructPerson s1;
    ClassPerson c1;
    c1.age = 21;
    s1.age = 22;
    strcpy(c1.name, "Knatte");
    strcpy(s1.name, "Fnatte");
    cout << c1.name << "\t" << c1.age << endl << s1.name << "\t" << s1.age;
 
}