#include <iostream>

int main(){
	int * p_number {}; // can only store an address of a varible of type int
	double * p_fractional_number{}; // can only store an addres of a variable of type double

	//Explicitely initializer to nullptr
	int * p_number1 {nullptr};
	int * p_fractional_number1 {nullptr};

	std::cout << "p_number: " << p_number << std::endl;
	std::cout << "size of number pointer: " << sizeof(p_number) << " , size of int: " << sizeof(int) << std::endl;
	std::cout << "p_fractional_number: " << p_fractional_number << std::endl;
	std::cout << "size of number pointer: " << sizeof(p_fractional_number) << " , size of double: " << sizeof(double) << std::endl;
	std::cout << "p_number1: " << p_number1 << std::endl;
	std::cout << "size of number pointer: " << sizeof(p_number1) << " , size of int: " << sizeof(int) << std::endl;
	std::cout << "p_fractional_number1: " << p_fractional_number1 << std::endl;
	std::cout << "size of number pointer: " << sizeof(p_fractional_number1) << " , size of double: " << sizeof(double) << std::endl;

	int int_var {43}; // The variable
	int* p_int {&int_var}; //Assign pointer p_int to that value

	std::cout << "int_var: " << int_var << std::endl;
	std::cout << "p_int (Address in memory of int_var=43): " << p_int << std::endl;

	int_var = {33};
	std::cout << "p_int (Address in memory of int_var=33): " << p_int << std::endl;

	// You can also change the address strored in a pointer any time
	int int_var1 {65};

	int_var1 = 126;
	p_int = &int_var1; // Assign a different address to the pointer
	std::cout << "p_int (Now become address of int_var1): " << p_int << std::endl;

	return 0;
}