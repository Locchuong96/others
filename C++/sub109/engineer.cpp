#ifndef ENGINEER_CPP
#define ENGINEER_CPP

#include "engineer.h"
#include <string_view>

Engineer::Engineer(){}

Engineer::Engineer(std::string_view major_param)
	: m_major(major_param)
	{}

std::ostream& operator<<(std::ostream& out, const Engineer& engineer){
	out << "Egineer [" << engineer.m_full_name 
		<< " " <<  engineer.m_age 
		<< " " <<  engineer.get_adress()
		<< " " << engineer.m_major << "]";
	return out;
}

Engineer::~Engineer(){}

#endif