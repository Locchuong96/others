#include <iostream>

int main(){
	// Compiler time error
	// std::cout << "Hello world!" << std::endl
	
	// Runtime error
	int value = 7/0;
	std::cout << "value :" << value << std::endl;
	return 0;
}