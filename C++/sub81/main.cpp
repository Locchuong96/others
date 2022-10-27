#include <iostream>
#include <string>

int main(int argc,char** argv){

	// Capture lists
	// double a {10};
	// double b {20};
	// auto func = [a,b](){
	// 	std::cout << "a + b: " << a + b << std::endl;
	// };
	// func();

	// Capturing by value: what we have in the lambda function is a copy

	// int c{42};
	// auto func = [c](){
	// 	std::cout << "Inner value: " << c << std::endl;
	// }

	// for(size_t i{}; i <5;i++){
	// 	std::cout << "Outer value: " << c << std::endl;
	// 	func();
	// 	++c;
	// }

	int c{42};

	auto func = [&c](){
		std::cout << "Inner value: " << c << std::endl;
	};

	for (size_t i{}; i <5; ++i){
		std::cout << "Outer value: " << c << std::endl;
		func();
		++c;
	}

	return 0;
}