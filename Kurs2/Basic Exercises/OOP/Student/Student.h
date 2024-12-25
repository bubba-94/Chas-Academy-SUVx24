#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
class Person{
private:
    std::string name;
    int age;
public:
    Person(std::string name, int age);
    void print_info();
};

class Student: public Person{
private:
    int student_id;
public:
    Student(std::string name, int age, int student_id);
    void print_student();

};


#endif