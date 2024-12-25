#ifndef CLASS_H
#define CLASS_H
#include <string>

class Person{
private:
    std::string m_name;
    int m_age;
public:
    Person();
    Person(std::string name, int age);

    std::string get_name();
    int get_age();
    void set_name(std::string name);
    void set_age(int age);
};



#endif