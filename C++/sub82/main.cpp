#include <iostream>
#include <string>

int main(int argc,char** argv){

	int a {22};
	int b {32};
    int c {42};

	auto func = [=](){
		std::cout << "Inner value a: " << a << std::endl;
		std::cout << "Inner value b: " << b << std::endl;
		std::cout << "Inner value c: " << c << std::endl;
		std::cout << std::endl;
	};

	for (size_t i {}; i <5; ++i){
		std::cout << "Outer value a: " << a << std::endl;
		std::cout << "Outer value b: " << b << std::endl;
		std::cout << "Outer value c: " << c << std::endl;
		std::cout << std::endl;
		func();
		++a;
		++b;
		++c;
	}

	return 0;
}