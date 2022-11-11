#ifndef NURSE_CPP
#define NURSE_CPP

# include "nurse.h"

Nurse::Nurse(){}


std::ostream& operator<<(std::ostream& out, const Nurse& nurse){
	out << "Nurse [" << nurse.m_full_name 
		<< " " <<  nurse.m_age 
		<< " " <<  nurse.get_adress() << "]";
	return out;
};

Nurse::~Nurse(){}

#endif