#include <iostream>
#include "person.h"

// Variable: Declaration and defination
double weight {};

double add(double a, double b);

struct Point{
	double m_x{};
	double m_y{};
};

int Person::person_count = 8;

// use Person class from Person Person::Person
Person::Person(const std::string& names_param,int age_param)
	: full_name{names_param}, age{age_param}{
		++person_count;
	}

int main(){

	Person p1("John Snow",35);

	p1.print_info();

	return 0;
}