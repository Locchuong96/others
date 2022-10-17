#include <iostream>

// Function Declaration
int max(int a, int b);
int min(int a, int b);
int inc_mult(int a, int b);

int main(int argc, char **argv){
	int a {10};
	int b {11};
	std::cout << "max(" << a << "," << b << ")" << max(a,b) << std::endl;
	std::cout << "min(" << a << "," << b << ")" << min(a,b) << std::endl;
	result = inc_mult(a,b);
	std::cout << "result: " << result << std::endl;
	return 0;
}

// Function definition or implementation
int max(int a, int b){
	if(a>b)
		return a;
	else
		return b;
}

int min(int a, int b){
	if(a<b)
		return a;
	else
		return b;
}

int inc_mult(int a, int b){
	return( (++a) * (++b));
}