#include <iostream>

int main(){

	// Addition
	int number1 {2};
	int number2 {7};

	int result= number1 + number2;
	std::cout << "result: " << result << std::endl;

	// Subtraction
	int diff = number1 - number2;
	std::cout << "diff: " << diff<< std::endl;

    // Multiplication
    int product = number1 * number2;
    std::cout << "product : " << product << std::endl;

    // Division, you can not store floating point number by integer
    result  = number2 / number1;
    std::cout << "result : " << product << std::endl;

    // Modulus
    std::cout << "result : " << 31%10 << std::endl;
    
	return 0;
}