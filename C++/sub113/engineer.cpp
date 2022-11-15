#ifndef ENGINEER_CPP
#define ENGINEER_CPP

#include "engineer.h"
#include <iostream>

Engineer::Engineer(){
	std::cout << "Default constructor for ENGINEER called,,," << std::endl;
}

Engineer::Engineer(std::string_view fullname, int age, std::string_view address, int contract_count_param)
	:Person(fullname,age,address),contract_count(contract_count_param){
		std::cout << "Custom constructor for ENGINEER called,,," <<std::endl;
	}

Engineer::~Engineer(){}
std::ostream& operator<<(std::ostream& out, const Engineer& operand){
	out << "Engineer [Full name: " << operand.get_full_name()
		<< ",age: " << operand.get_age()
		<< ",address: " << operand.get_address()
		<< ",contract_count: " << operand.get_contract_count() << "]";
	return out;
}

#endif