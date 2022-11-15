# ifndef PERSON_CPP
# define PERSON_CPP

# include <string>
# include <string_view>
# include "person.h"
# include <iostream>

std::ostream& operator<<(std::ostream&, const Person& person) {
	out << "Person [Full name: " << person.get_full_name()
		<< ",Age: " << person.get_age()
		<< ",Address: " << person.get_address() << "]";
	return out;
}

Person::Person(){}

Person::~Person(){}

Person::Person(const std::string_view fullname, int age, const std::string address)
	:m_full_name(fullname), age(age), address(address){
}

void Person::do_something() const{
	std::cout << "Hello" << std::endl;
}

# endif