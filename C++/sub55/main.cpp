#include <iostream>

int main(int argc,char*argv){
	int* p_number{ new int{67}}; // Points to some address, let's call that address1
	std::cout<< "*p_number: " << *p_number << std::endl;
	// Should delete and reset here
	int number{55}; // lives at address2
	std::cout<< "number: " << number << std::endl;
	p_number = &number; // Now p_number point to address2, but address1 is still in use by our program.But our program
						// But our program has lost access to that memory location. Memory has been leaked
	std::cout << "*p_number: " << *p_number << std::endl;	
}