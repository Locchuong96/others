#include <iostream>

#include "person.h"
#include "person.cpp"

#include "engineer.h"
#include "engineer.cpp"

int main(){

	// Person person("Daniel Gray",23,"323-232-451");
	// std::cout << person <<std::endl;
	
	Engineer eng1("Daniel Gray",23,"323-232-451",3);
	std::cout << "eng1: " << eng1 << std::endl;

	return 0;

}