#include <iostream>
#include "person.h"
#include "person.cpp"
#include "engineer.h"
#include "engineer.cpp"
#include "civilengineer.h"
#include "civilengineer.cpp"

int main(){

	// Person person1("John Snow",27,"Winterfell cold 22st#25");
	// std::cout << "person1: " << person1 << std::endl;
	// std::cout << "_______________________" << std::endl;

	// Engineer eng1("Daniel Gray",41,"Green Sky Oh Blue 33st#34",12);
	// std::cout << "engineer1: " << eng1 << std::endl;
	// std::cout << "_______________________" << std::endl;

	CivilEngineer civil_eng1("John Travolta",45,"Tiny Dog 34st#44",31,"Road Strength");
	std::cout << "civil_engineer1: " << civil_eng1 << std::endl;

    return 0;
}