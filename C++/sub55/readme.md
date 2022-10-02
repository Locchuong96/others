### Memory leaks

When we loose access to memory that is dynamically allocated, meaning you lost the pointer pointing to that allocated memory

Example:

	int* p_number{ new int{67}}; // Points to some address, let's call that address1
	std::cout<< "*p_number: " << *p_number << std::endl;
	// Should delete and reset here
	int number{55}; // lives at address2
	std::cout<< "number: " << number << std::endl;
	p_number = &number; // Now p_number point to address2, but address1 is still in use by our program.But our program
						// But our program has lost access to that memory location. Memory has been leakedn

So we should delete and reset here

	// Double allocation
	int *p_number1 {new int{55}};
	// Use the pointer
	std::<<cout << "*p_number1" << *p_number1 << std::endl;
	// Should delete and reset here
	p_number1 = nullptr;
	delete p_number1;
	p_number1 = new int {44}; // memory with int{55} leaked

Pointer in local scope

	#include <iostream>
	int main(int argc,char* argv){
		{
			int* p_number2 {new int{57}};
		}
		// Memory with int{57} leaked.
		return 0;
	}

Solution

	#include <iostream>
	int main(int argc,char* argv){
		{
			int* p_number2 {new int{57}};
			std::cout << "*p_number2: "<< p_number2 << std::endl;
			p_number2 = nullptr;
			delete p_number2;
		}
		// Memory with int{57} leaked.
		return 0;
	}