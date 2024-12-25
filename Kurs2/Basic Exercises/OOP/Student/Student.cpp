#include "Student.h"

Person::Person(std::string name, int age): name{name}, age{age}{}

Student::Student(std::string name, int age, int student_id) : Person(name,age),
student_id{student_id}{}

void Person::print_info(){
    std::cout << "\nName: "<< name 
              << "\nAge: " << age;
}

void Student::print_student(){
    std::cout << "\n----------";
    std::cout << "\nID: " << student_id;
    print_info();
    
}