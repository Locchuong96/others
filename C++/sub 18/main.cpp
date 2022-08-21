#include <iostream>

int main(){
	
	float number1 {1.12345678901234567890f};
	double number2 {1.12345678901234567890};
	long double number3 {1.12345678901234567890L};

	//Print out the sizes
	std::cout<< "sizeof float : " << sizeof(float) << " number1 : " << number1 << std::endl;
	std::cout<< "sizeof double : " << sizeof(float) << " number2 : " << number2 << std::endl;
	std::cout<< "sizeof long double : " << sizeof(float) << " number3 : " << number3 << std::endl;

	return 0;
}