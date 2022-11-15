#ifndef PERSON_CPP
#define PERSON_CPP

#include "person.h"
#include <iostream>

Person::Person()
{
	std::cout << "Default constructor for PERSON called,,," << std::endl;
}

Person::Person(std::string_view fullname,int age, std::string_view address)
	: m_full_name{fullname}, m_age{age},m_address{address}
{
	std::cout << "Custom constructor for PERSON called,,," <<std::endl;
}

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

