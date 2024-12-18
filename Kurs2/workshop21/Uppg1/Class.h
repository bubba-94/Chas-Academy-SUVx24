#ifndef CLASS_H
#define CLASS_H
#include <iostream>
#include <string>


class Person
{
private:
    std::string name;
    int birthyear;

    public:
    Person(std::string name, int year);
    ~Person();
    void list_all_persons();
};

#endif