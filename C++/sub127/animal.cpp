#ifndef ANIMAL_CPP
#define ANIMAL_CPP

#include "animal.h"

Animal::Animal(std::string_view description)
    : m_description(description)
{
}

Animal::~Animal()
{
}

std::ostream& operator<<(std::ostream& out,const Animal& animal){
	out << "Animal:[ description: " << animal.m_description << "]" << std::endl;
	return out;
}

#endif