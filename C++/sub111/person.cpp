#ifndef PERSON_CPP
#define PERSON_CPP

#include "person.h"
#include <iostream>

Person::Person(std::string_view fullname,int age, const std::string address)
	: m_full_name{fullname}, m_age{age},m_address{address}
{
}

// void Person::do_something(){
//     m_full_name = "Jimmy";
//     m_age = 4;
//     m_address ="abc";
// }

std::ostream& operator<<(std::ostream& out , const Person& person){
   out << "Person [Full name :" << person.get_full_name() <<
                      ", Age:" << person.get_age() <<
                      ", Address:" << person.get_address() << "]";
  return out;
}

Person::~Person()
{
}

#endif

