### Returning from functions

Example:
	
	#include <iostream>
	#include <string>

	int sum (int a , int b){
		int result = a + b;
		std::cout << "In: &result(int): " << &result << " result " << result << std::endl;
		return result;
	}

	int main (int argc, char **argv){
		int a {34};
		int b {16};
		int result = sum(a,b);
		std::cout << "Out: &result(int): " << &result << " result " << result << std::endl;
		return 0;
	}

In modern compilers, return by value is commonly optimized out by the compiler when possible and the function is modified behind your back to return by reference, avoicing unnecessary copies. Compiler optimizations to return by reference

	std::string add_strings(std::string str1, std::string str2){
	std::string result = str1 + str2;
	std::cout << "In: &result(std::string): " << &result << std::endl;
	return result;
	}

	int main(int argc,char** argv){
		std::string str result = add_strings(std::string("Hello"),std::string("World!"));
		std::cout << "Out: &result(std::string): " << &str_result << std::endl;
		std::cout << "str_result: " << str_result << std::endl;
	}