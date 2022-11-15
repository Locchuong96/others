#include "person.h"
#include "person.cpp"
#include "engineer.h"
#include <iostream>

Engineer::Engineer(std::string_view fullname, int age,std::string_view address, int contract_count) : 
Person(fullname,age,address),contract_count(contract_count){
	std::cout << "Custom constructor for Engineer called..." << std::endl;
}

Engineer::~Engineer(){}

std::ostream& operator<<(std::ostream& out,const Engineer& operand){
	out << "Engineer [Full name: " << operand.get_full_name() <<
			",age: " << operand.get_age() <<
			",adrress: " << operand.get_address() <<
			",contract_count: " << operand.get_contract_count() << "]";
	return out;
}