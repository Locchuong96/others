### pointer to char

Example:

	#include <iostream>

	int main(){
		//Can use normal pointer to char like we have been doing for double,int or anything else really
		char* p_char {nullptr};
		char char_var {'A'};

		p_char = &char_var;
		std::cout << "The value of p_char is: " << p_char << std::endl;
		std::cout << "The value stored in p_char is: " << *p_char << std::endl;

		char char_var1 {'C'};
		p_char = &char_var1;
		std::cout << "The value of p_char is: " << p_char << std::endl;
		std::cout << "The value stored in p_char is: " << *p_char << std::endl;

		return 0;
	}

Initialize by string iteral, c++ convert literal string into array of char and the pointer will be pointed to first character, Example:

	//Pointer to char can also do something special
	//You can initialize with a string literal: c-string
	// const char* p_message {"Hello world!"};
	char* p_message {"Hello world!"};
	p_message = &char_var;
	std::cout << "The value of p_message is: " << p_message << std::endl;
	std::cout << "The value stored in p_message is: " << *p_message << std::endl;

*Note* The string literal is made up of const char. Trying to modify any of them will result in a disaster
