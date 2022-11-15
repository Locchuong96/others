# ifndef CIVIL_ENGINEER_CPP
# define CIVIL_ENGINEER_CPP

# include <string>
# include <string_view>
# include "civil_engineer.h"

std::ostream& operator<<(std::ostream&, const CivilEngineer& operand){
	out << "CivilEngineer [Full name : " << operand.get_full_name()
		<< ",age: " << operand.get_age()
		<< ",address: " << operand.get_address()
		<< ",contract_count: " << operand.contract_count()
		<< ",speciality: " <<operand.m_speciality << "]";
	return out;
}

CivilEngineer::CivilEngineer(){}
CivilEngineer::~CivilEngineer(){}

# endif