#include <iostream>

int main(){
	// Can use normal pointer to char like we have been doing for double,int or anything else really
	char* p_char {nullptr};
	char char_var {'A'};

	p_char = &char_var;
	std::cout << "The value of p_char is: " << p_char << std::endl;
	std::cout << "The value stored in p_char is: " << *p_char << std::endl;

	char char_var1 {'C'};
	p_char = &char_var1;
	std::cout << "The value of p_char is: " << p_char << std::endl;
	std::cout << "The value stored in p_char is: " << *p_char << std::endl;

	// Pointer to char can also do something special
	// You can initialize with a string literal: c-string
	// const char* p_message {"Hello world!"};
	char* p_message {"Hello world!"};
	// p_message = &char_var;
	std::cout << "The value of p_message is: " << p_message << std::endl;
	std::cout << "The value stored in p_message is: " << *p_message << std::endl; // will print out the garbage

	// assign value for character pointer
	p_message = & char_var;
	std::cout << "The value of p_message (afer assignment) is: " << p_message << std::endl;
	std::cout << "The value stored in p_message is: " << *p_message << std::endl;

	// Trying to modify literal string pointer
	*p_message = 'B';
	std::cout << "The value of p_message is: " << p_message << std::endl;
	std::cout << "The value stored in p_message is: " << *p_message << std::endl;

	return 0;
}