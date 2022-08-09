#include <iostream> // libary print thing in the console

constexpr int get_value(){
	return 3;
}

// main function is the entrypoint of cplusplus program
int main(){
	constexpr int value = get_value();
	std::cout << "value : " << value << std::endl;
	std::cout << "Hello World" << std::endl;
	return 0;
}