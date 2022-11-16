### Inheritance with destructors

Base class part of derived object constructed first and destructed last

	#include <iostream>
	#include "person.h"
	#include "engineer.h"
	#include "civilengineer.h"

	int main(int argc,char** argv){
		CivilEngineer civil_eng1;
		std::cout << std::endl; // Destructors called in reverse order than the constructors
		return 0;
	}