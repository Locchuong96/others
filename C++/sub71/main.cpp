#include <iostream>		 // Format for standard headers
#include "comparisons.cpp" // Format for custom headers
#include "operations.cpp"  // Format for custom headers

int main(int argc, char ** argv){

	int a{3};
	int b{4};

	std::cout << "max(" << a << "," << b << ") " << max(a,b) << std::endl;
	std::cout << "min(" << a << "," << b << ") " << min(a,b) << std::endl;
	double result = inc_mult(a,b);
	std::cout << "result: " << result << std::endl;

	return 0;

}