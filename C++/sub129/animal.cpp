#ifndef ANIMAL_CPP
#define ANIMAL_CPP

#include "animal.h"

Animal::Animal(std::string_view description)
	: m_description(description){
	}

Animal::~Animal(){
	std::cout << "Animal destructor called" << std::endl;
}

#endif