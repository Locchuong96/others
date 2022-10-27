#include <iostream>

int main(int argc, char** argv){

	auto func1 = [](double a, double b)-> double{
			return (a+b);
		}(12.1,5.7);

		std::cout << "func1: " << func1 << "sizeof(func1): " << sizeof(func1) << std::endl;
