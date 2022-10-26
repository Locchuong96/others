#include <iostream>
#include <string>

int sum (int a , int b){
	int result = a + b;
	std::cout << "In: &result(int): " << &result << std::endl;
	return result;
}

int main (int argc, char **argv){
	int a {34};
	int b {16};
	int result = sum(a,b); // The compiler optimize and reuse the peace memory to storage
	std::cout << "Out: &result(int): " << &result << " result " << result << std::endl;
	return 0;
}