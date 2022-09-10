### Do while loops

Do something before check the condition, if the condition still true, while loop still alive

Example

	#include <iostream>

	int main(){
		const unsigned int COUNT {10};
		unsigned int i {1}; // Intialization

		do{
			std::cout << "[" << i << "] : I love C++" << std::endl;
			i++; 
		}
		while(i < COUNT); // test

		return 0;
	}
