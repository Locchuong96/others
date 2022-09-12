### Declaring and using pointers

To declare pointer,`nullptr` standfor none pointer,example: 

	#include <iostream>

	int main(){
		int * p_number {}; // can only store an address of a varible of type int, none pointer
		double * p_fractional_number{}; // can only store an addres of a variable of type double

		//Explicitely initializer to nullptr
		int * p_number1 {nullptr}; // expicitly initialize with nullptr = none pointer
		int * p_fractional_number1 {nullptr};

		std::cout<< "p_number: " << p_number << std::endl;
		std::cout<< "p_fractional_number: " << p_fractional_number << std::endl;
		std::cout<< "p_number1: " << p_number1 << std::endl;
		std::cout<< "p_fractional_number1: " << p_fractional_number1 << std::endl;

		return 0;
	}

*Note* all pointer have a same size even they are int or double

*Note2* The position of the * doesn't matter, example

	int*  p_number2{nullptr};
	int * p_number3{nullptr};
	int  *p_number4{nullptr};

*Note3* You can not declare in the same line like this

	int* p_number5{}, other_int_var5{}; // p_number5 is a pointer, other_int_var5 is a integer 
	int* p_number6{}, other_int_var6{};

To assigning data to pointer variables

	int int_var {43}; // Variable
	int* p_int {}; a pointer to a int,
	int* p_int{&int_var}; // p_int now point to variable, p_int pointed to addres of int_var

*Note* Pointer only stores the types for which it was declared

	int* p_int1{nullptr};
	double double_var{33};
	p_int1 = &double_var; // Compile error can not double to int

Change the value pointed to (change the value of variable), meaning there are 2 way you can change the value of the variable right now. by the pointer or by the variable

	int* p1 {}; // declare a pointer
	std::cout << "pointer: " << p1 << std::endl;
	int var {27}; // declare a variable
	std::cout << "value of var: " << var << std::endl;
	
	p1 = &var; // p1 = address of var variable
	*p1 = 10; // assign new value for variable by the pointer
	std::cout << "pointer: " << p1 << std::endl;
	std::cout << "value of var: " << var << std::endl;
	std::cout << std::endl;

	var = 15; // assign new value for variable by the variable
	std::cout << "pointer: " << p1 << std::endl;
	std::cout << "value of var: " << var << std::endl;
	std::cout << std::endl;

