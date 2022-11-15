#ifndef CIVIL_ENGINEER_H
#define CIVIL_ENGINEER_H

#include "engineer.h"
#include "engineer.cpp"


class CivilEngineer : public Engineer{
	friend std::ostream& operator<<(std::ostream& out, const CivilEngineer& operand);

public:
	CivilEngineer();

	~CivilEngineer();

	void build_road(){
	    // m_full_name = "Jimmy"; this become private in engineer
	    // m_age = 4; this become private in engineer
	    // m_address ="abc"; this become private in engineer

	    add(10,2);
	    add(10,2,4);
	};

	// public:
	// 	using Person::do_something;  this become private in engineer

private:
	std::string m_speciality{"None"};
};

#endif