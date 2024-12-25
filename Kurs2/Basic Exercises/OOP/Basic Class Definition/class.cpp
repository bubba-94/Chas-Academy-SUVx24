#include "class.h"

Person::Person(){}
Person::Person(std::string name, int age): m_name{name}, m_age{age}{}

std::string Person::get_name(){
    return m_name;
}
int Person::get_age(){
    return m_age;
}

void Person::set_name(std::string name){
    this->m_name = name;
}
void Person::set_age(int age){
    this->m_age = age;
}