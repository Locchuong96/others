#ifndef PERSON_CPP
#define PERSON_CPP

#include "person.h"

Person::Person(){}

Person::Person(std::string full_name_param, int age_param,std::string adress_param)
	: m_full_name(full_name_param), m_age(age_param), m_adress(adress_param)
	{}

std::ostream& operator<<(std::ostream& out, const Person& person){
	out << "Person [" <<person.m_full_name << " " << person.m_age << " " << person.get_adress() << "]";
	return out;
}

Person::~Person(){}

#endif