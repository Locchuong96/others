### Dynamic Memory Allocation

Using memory allocated on the stack

Example:

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
	    std::cout << "&number1: " << &number1 << std::endl;
		std::cout << "*p_number1: " << *p_number1 << std::endl;
	}

*Note: Don't try to writing into junk address*

	// Writing into unitialized pointer through dereference
	int* p_number2; // Contains junk address : could be anything
	*p_number2 = 55; // Writing into junk address: BAD
	std::cout << std::endl;
	std::cout << "Writing into unitialized pointer through derefernce" << std::endl;
	std::cout << "p_number2 : " << p_number2 << std::endl; // Reading from junk address
	std::cout << "*p_number2 : " << *p_number2 << std::endl;
	// Initializing pointer to null
	// int *p_number3{nullptr}; Also works
	int * p_number3 {}; //Initialized with pointer equivalent of zero: nullptr
						// A pointer point to nowhere
	//*p_number3 = 33; // Writing into a pointer pointing nowhere: BAD,CRASH
	std::cout << std::endl;
	std::cout << "Reading and writting through nullptr: " << std::endl;
	//std::cout << "p_number3: " << p_number3 << std::endl;
	//std::cout << "*p_number3: " << *p_number3 << std::endl; // Reading from nullptr BAD,CRASH

**Compare Stack and Heap**

`Stack`:
- Memory is finite
- The developer isn't in full control of memory lifetime
- Lifetime is controlled by the scope mechanism

`Heap`:
- Memory is finite
- The developer is in full control of when memory is allocated and when it's released
- Lifetime is controlled explicitly through new and delete operators

**Lifetime through scope mechanism**

	#include <iostream>
	int main(int argc, char **argv){
		{
			int local_scope_var {33}; // this variable is come to live in bracket and die outsize
		}
		return 0;
		}
	}

Stack lifetime VS heap lifetime

	#include <iostream>
	int main(int argc,char **argv){
		{
			int local_var{33};
			int* local_pt = new int;
		}
		return 0;
	}


Releaseing and resetting

	int *p_number4{nullptr}; // Create pointer from system memory
	p_number4 = new int; // Using pointer from
	/*
	*/
	delete p_number4; // 
	p_number4 = nullptr;

**Allocate dynamic memory through new**

When you assign a pointer as dymanic memory it will be store as as heap, not a stack

	// Initialize the pointer with dynamic memory, Dynamically allocate
	// memory at runtime and make a pointer point to it

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
	std::cout << "*p_number4: " << *p_number4 << std::endl; 

Initialize with `new` upon pointer declaration

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

Calling delete twice on a pointer: BAD!

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