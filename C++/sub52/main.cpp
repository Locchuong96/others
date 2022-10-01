#include <iostream>

int main(){
    int* p_number; // Dangling unitialized pointer
    std::cout << std::endl;
	std::cout << "Case 1: Unitialized pointer: ." << std::endl;
	std::cout << "p_number: " << p_number << std::endl;

	std::cout << std::endl;
	std::cout << "Case2: Deleted pointer" << std::endl;
	int* p_number1 {new int{67}};
	std::cout << "*p_number1 (before delete): " << *p_number1 << std::endl;
	delete p_number1;
	std::cout << "*p_number1(after delete): " << *p_number1 << std::endl;

	std::cout << std::endl;
	std::cout << "Case3: Multiple pointers pointing to the same address: " << std::endl;
	int* p_number3 {new int{83}};
	int* p_number4 {p_number3};
	std::cout << "p_number3 - " << p_number3 << " - " << *p_number3 << std::endl;
	std::cout << "p_number4 - " << p_number4 << " - " << *p_number4 << std::endl;
	// Deleting p_number3
	delete p_number3;
	// p_number4 points to deleted memory, Dereferncing it will lead to
	// Unidefined behaviour: Crash / garbage or whatever
	std::cout << "p_number4(after deleting p_number3) - " << p_number4 << " - " << *p_number4 << std::endl;

	// Solution1: Initialize your pointers immediately upon declaration
	std::cout << std::endl;
	std::cout << "Solution 1: " << std::endl;
	int *p_number5{};
	int *p_number6{new int{56}};
	// Check for nullptr before use
	if (p_number6!=nullptr){
		std::cout << "*p_number6: " << * p_number6 << std::endl;
	}

	//Solution2:
	//Right after you call delete on a pointer, remember to reset
	//the pointer to nullptr to make it CLEAR doesn't point anywhere

	std::cout << std::endl;
	std::cout << "Solution2: " << std::endl;
	int *p_number7{new int{82}};

	// Use the however you want
	std::cout << "p_number7 - " << p_number7 << " - " << *p_number7 << std::endl;
	delete p_number7;
	p_number7 = nullptr; // Reset the pointer

	// Check for nullptr before use
	if(p_number7!=nullptr){
		std::cout << "p_number7: " << *p_number7 << std::endl;
	}
	else{
		std::cout << "p_number7 is nullptr" << std::endl;
	}

	//Solution3 
	// For multiple pointers pointing to the same address, Make sure there is one clear pointer (master pointer) that
	// owns the memory (responsible for releasing when necessary), other pointers should be able to deference whe the master pointer is valid
    std::cout << "Solution3: " << std::endl;
	int* p_number8 {new int{382}}; // let say p_number8 is the master pointer
	int* p_number9 {p_number8};

	// Dereference the pointers and use them
	std::cout << "p_number8 - " << p_number8 << " - " << *p_number8 << std::endl;

	if(!(p_number8 == nullptr)){
		// Only use slave pointers when master pointer is valid
		std::cout << "p_number9 - " << p_number9 << " - " << *p_number9 << std::endl;

	delete p_number8; // Master releases the memory
	p_number8 = nullptr;

	if(!(p_number8 == nullptr)){
		// Only use slave pointers when master pointer is valid
		std::cout << "p_number9 - " << p_number9 << " - " << *p_number9 << std::endl;
		}
	else{
		std::cerr << "WARNING: Trying to use an invalid pointer" << std::endl;
		}
	}

    return 0;
}
