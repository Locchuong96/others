#include "civilengineer.h"
#include <iostream>

CivilEngineer::CivilEngineer(){
	std::cout << "Default constructor for CIVIL ENGINEER called,,," << std::endl;
}

CivilEngineer::~CivilEngineer(){}

std::ostream& operator<<(std::ostream& out, const CivilEngineer& operand){
	out << "CivilEngineer [Fullname: " << operand.get_full_name() <<
	",age: " << operand.get_age() <<
	",address: " << operand.get_address() <<
	",contract_count: " << operand.get_contract_count() <<
	",speciality: " << operand.m_speciality << "]";
	return out;
}