#include <iostream>

int main(){
    
	int number {22};
    int* p_number = &number;
    std::cout << std::endl;
	std::cout << "Declaring pointer and assigning address: " << std::endl;
	std::cout << "number: " << number << std::endl;
	std::cout << "p_number: " << p_number << std::endl;
	std::cout << "&number: " << &number << std::endl;
	std::cout << "*p_number: " << *p_number << std::endl;

	int* p_number1; // Uninitialized pointer, contains junk address
    int number1 {12};
    p_number1 = &number1; // Make it point to a valid address
    std::cout << std::endl;
	std::cout << "Unitialized pointer: " << std::endl;
    std::cout << "&number1: " << *&number1 << std::endl;
	std::cout << "*p_number1: " << *p_number1 << std::endl;

	// Writing into unitialized pointer through dereference
	// int* p_number2; // Contains junk address : could be anything
	// *p_number2 = 55; // Writing into junk address: BAD
	// std::cout << std::endl;
	// std::cout << "Writing into unitialized pointer through derefernce" << std::endl;
	// std::cout << "p_number2 : " << p_number2 << std::endl; // Reading from junk address
	// std::cout << "*p_number2 : " << *p_number2 << std::endl;

	int* p_number4{nullptr};
	p_number4 = new int; // Dynamically allocate space for a single int on the heap
						 // This memory belongs to our program from now on, The system
					     // can not use it for anything else, until we return it.
					     // After this line executes, we will have a valid memory location allocated
					     //  The size of the allocated memory will be such that it
					     // can store the type pointed to by the pointer
	*p_number4 = 77; // Writting into dynamically allocated memory
	std::cout << std::endl;
	std::cout << "Dynamically allocating memory: " << std::endl;
	std::cout << "&number1: " << *&number1 << std::endl;
	std::cout << "*p_number4: " << *p_number4 << std::endl;

	// It is also possible to initialize the pointer with  a valid
	// address up on declaration, Not with a nullptr
	int* p_number5 {new int}; // Memory location contain junk value
	int* p_number6 {new int (22) }; // use direct initialization
	int* p_number7 {new int {23} }; // use uniform initialization
	std::cout << std::endl;
	std::cout << "Intialize with valid memory address at declaration: " << std::endl;
	std::cout << "p_number5: " << p_number5 << std::endl;
	std::cout << "*p_number5: " << p_number5 << std::endl;
	std::cout << "p_number6: " << p_number6 << std::endl;
	std::cout << "*p_number6: " << p_number6 << std::endl;
	std::cout << "p_number7: " << p_number7 << std::endl;
	std::cout << "*p_number7: " << p_number7 << std::endl;

	// Remember to release the memory
	delete p_number5;
	p_number5 = nullptr;
	delete p_number6;
	p_number6 = nullptr;
	delete p_number7;
	p_number7 = nullptr;

	int* p_number8 = new int {88};

	//User the pointer
	std::cout << std::endl;
	std::cout << "deleting twice: BAD" << std::endl;
	std::cout << "p_number8: " << p_number8 << std::endl;
	std::cout << "*p_number8: " << *p_number8 << std::endl;

	//Remember to release any dynamically allocated piece of memory
	delete p_number8;
	delete p_number8; // Anything can happen
	p_number8 = nullptr;

	std::cout << "After deleting twice " << std::endl;

}