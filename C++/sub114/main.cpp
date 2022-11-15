#include <iostream>
#include "person.h"
#include "person.cpp"
#include "engineer.h"
#include "engineer.cpp"
#include "civilengineer.h"
#include "civilengineer.cpp"

int main(){
		// Engineer eng1("Daniel Gray",41,"Green Sky Oh Blue 33St#75",12);
		// std::cout << "eng1: " << eng1 << std::endl;
		// std::cout << "_________________________________" << std::endl;
		// Engineer eng2(eng1); // Copy constructor
		// std::cout << "eng2: " << eng2 << std::endl;
		CivilEngineer civil_eng1("Daniel Gray",41,"Green Sky Oh Blue 33St#75",12,"Tennis");
		std::cout << "eng1: " << civil_eng1 << std::endl;
		std::cout << "_________________________________" << std::endl;
		CivilEngineer civil_eng2(civil_eng1); // Copy constructor
		std::cout << "eng2" << civil_eng2 << std::endl;

	    return 0;
	}