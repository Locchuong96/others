#ifndef ENGINEER_CPP
#define ENGINEER_CPP

#include "person.h"
#include "engineer.h"
#include <iostream>

Engineer::Engineer(){
	std::cout << "Default constructor for Engineer called..." << std::endl;
}

Engineer::Engineer(std::string_view fullname,int age,std::string_view address,int contract_count) : 
	Person(fullname,age,address),contract_count(contract_count){
		std::cout << "Custom contructor for Engineer called..." << std::endl;
	}

Engineer::Engineer(const Engineer& source) :
	Person(source), contract_count(source.contract_count){
		std::cout << "Custom copy contructor for Engineer called..." << std::endl;
	}

std::ostream& operator<<(std::ostream& out, const Engineer& operand){
	out << "Engineer [Full name : " << operand.get_full_name() <<
            ",age : " << operand.get_age() << 
            ",address : " << operand.get_address() <<
            ",contract_count : " << operand.contract_count << "]";
    return out;   	
}

Engineer::~Engineer(){
	std::cout << "Destructor for Engineer called..." << std::endl;
}

#endif