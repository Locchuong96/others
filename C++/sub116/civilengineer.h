#ifndef CIVIL_ENGINEER_H
#define CIVIL_ENGINEER_H

#include "engineer.h"
#include "engineer.cpp"

class CivilEngineer : public Engineer{
	friend std::ostream& operator<<(std::ostream& out, const CivilEngineer& operand);
public:

	CivilEngineer();
	
	CivilEngineer(std::string_view fullname,int age,std::string_view address,int contract_count,std::string_view speciality);
	
	CivilEngineer(const CivilEngineer& source);
	
	~CivilEngineer();

private:
	std::string m_speciality{"None"};

};

#endif