#include "civilengineer.h"
#include <iostream>

CivilEngineer::CivilEngineer(){
	std::cout << "Default constructor for CIVIL ENGINEER called,,," << std::endl;
}

CivilEngineer::CivilEngineer(std::string_view fullname, int age,
	std::string_view address, int contract_count, std::string_view speciality)
		: Engineer(fullname,age,address,contract_count), m_speciality(speciality){
			std::cout << "Custom constructor for CIVIL ENGINEER called,,," <<std::endl;
		}

// CivilEngineer::CivilEngineer(std::string_view fullname, int age,
// 	std::string_view address, int contract_count, std::string_view speciality){
// 		m_full_name = fullname;
// 		m_age = age;
// 		m_address = address;
// 		m_contract_count = contract_count;
// 		m_speciality =speciality;
// 			std::cout << "Custom constructor for CIVIL ENGINEER called,,," <<std::endl;
// 		}


// CivilEngineer::CivilEngineer(std::string_view fullname, int age,
// 	std::string_view address, int contract_count, std::string_view speciality)
// 	: m_full_name(fullname), m_age(age), m_address(address), contract_count(contract_count), m_speciality(speciality){}

CivilEngineer::~CivilEngineer(){}

std::ostream& operator<<(std::ostream& out, const CivilEngineer& operand){
	out << "CivilEngineer [Fullname: " << operand.get_full_name() <<
	",age: " << operand.get_age() <<
	",address: " << operand.get_address() <<
	",contract_count: " << operand.get_contract_count() <<
	",speciality: " << operand.m_speciality << "]";
	return out;
}