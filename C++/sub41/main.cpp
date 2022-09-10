#include <iostream>

int main(){
	const unsigned int COUNT {10};
	unsigned int i {11}; // Intialization

	do{
		std::cout << "[" << i << "] : I love C++" << std::endl;
		++i; // Increment but after done while loop
	}
	while(i < COUNT); // test

	std::cout << "[" << i << "]: " << "Loop done!" << std::endl;

	return 0;
}
