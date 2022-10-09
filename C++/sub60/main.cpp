#include <iostream>

int main(int argc,char*argv){
	// Declare pointer and reference
	double double_value {12.34};
	double& ref_double_value {double_value}; // Reference to double_value
	double* p_double_value {&double_value}; // Pointer to double_value

	// Reading
	std::cout << "double_value: " << double_value << std::endl;
	std::cout << "&double_value: " << &double_value << std::endl;
	std::cout << "ref_double_value: " << ref_double_value << std::endl;
	std::cout << "&ref_double_value: " << &ref_double_value << std::endl; // Address
	std::cout << "p_double_value: " << p_double_value << std::endl; // Address of memory pointing to
	std::cout << "*p_double_value: " << *p_double_value << std::endl; // Value the pointer pointing to
	std::cout << "&p_double_value: " << &p_double_value << std::endl; // Address of the pointer

	// Writing to pointer
	std::cout << std::endl;
	std::cout << "Writing through pointer: " << std::endl;
	*p_double_value = 15.44;

	// Reading
	std::cout << "double_value: " << double_value << std::endl;
	std::cout << "&double_value: " << &double_value << std::endl;
	std::cout << "ref_double_value: " << ref_double_value << std::endl;
	std::cout << "&ref_double_value: " << &ref_double_value << std::endl; // Address
	std::cout << "p_double_value: " << p_double_value << std::endl; // Address of memory pointing to
	std::cout << "*p_double_value: " << *p_double_value << std::endl; // Value the pointer pointing to
	std::cout << "&p_double_value: " << &p_double_value << std::endl; // Address of the pointer

	// Writting through reference
	std::cout << std::endl;
	std::cout << "Writing through reference: " << std::endl;
	ref_double_value = 18.44;

	std::cout << "double_value: " << double_value << std::endl;
	std::cout << "&double_value: " << &double_value << std::endl;
	std::cout << "ref_double_value: " << ref_double_value << std::endl;
	std::cout << "&ref_double_value: " << &ref_double_value << std::endl; // Address
	std::cout << "p_double_value: " << p_double_value << std::endl; // Address of memory pointing to
	std::cout << "*p_double_value: " << *p_double_value << std::endl; // Value the pointer pointing to
	std::cout << "&p_double_value: " << &p_double_value << std::endl; // Address of the pointer

	double other_double_value{100.23};

	// This works, but it doesn't make ref_double_value reference to other_double_value
	// it merely changes the value referenced by ref_double_value to 100.23
	// Visualized this slides.
	ref_double_value = other_double_value;
	std::cout << "double_value: " << double_value << std::endl;
	std::cout << "other_double_value: " << other_double_value << std::endl;
	std::cout << "ref_double_value: " << ref_double_value << std::endl;
	// If you change ref_double_value now, other_double_value stays the same

	other_double_value = 55.1;
	std::cout << "double_value: " << double_value << std::endl;
	std::cout << "other_double_value: " << other_double_value << std::endl;
	std::cout << "ref_double_value: " << ref_double_value << std::endl;

	ref_double_value = 66.3;
	std::cout << "double_value: " << double_value << std::endl;
	std::cout << "other_double_value: " << other_double_value << std::endl;
	std::cout << "ref_double_value: " << ref_double_value << std::endl;

	return 0;
}