#include <iostream>

int number1 = 15; // Decimal
int number2 = 017; // Octal
int number3 = 0x0f; // Hexadecimal
int number4 = 0b00001111;// Binary C++14

int main(int argc,char **argv){
	std::cout << "Hello World!" << std::endl;
	std::cout << "Number1 is : " << number1 << std::endl;
	std::cout << "Number2 is : " << number2 << std::endl;
	std::cout << "Number3 is : " << number3 << std::endl;
	std::cout << "Number4 is : " << number4 << std::endl;

	return 0;
}