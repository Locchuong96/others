#include <iostream>

int main(int argc,char*argv){

	// Non const reference
	std::cout << std::endl;
	std::cout << "Non const reference: " << std::endl;
	int age {27};
	int& ref_age{age};

	std::cout << "age: " << age << std::endl;
	std::cout << "ref_age: " << ref_age << std::endl;

	// Can modify original variable through reference
	std::cout << std::endl;
	std::cout << "Modify original variable through reference: " << std::endl;
	ref_age++; // Modify through reference
	std::cout << "age: " << age << std::endl;
	std::cout << "ref_age: " << ref_age << std::endl;

	return 0;
}