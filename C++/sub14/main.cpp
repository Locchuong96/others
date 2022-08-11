#include <iostream>

int main(int argc,char **argv){
	std::cout << "Hello World" << std::endl;

	int a;
	int b;

	std::cout << "enter number a and b (seperate by enter)" <<std::endl;
	std::cin >> a;
	std::cin >> b;

	int c = 10/(a-b);
	std::cout<< "The value of c is: " << c << std::endl;

	return 0;
}