#include <iostream>
#include <string>

int max(int a,int b){
			return (a>b)? a:b;
		}

double max(double a,double b){
return (a>b)? a:b;
}

std::string_view max(std::string_view a, std::string_view b){
	return (a>b)? a:b;
}

double max(int a,double b){
	std::cout << "inside (int a,double b)" <<std::endl;
	return (a>b) ? a:b;
}

double max(double a,int b){
	std::cout << "inside (double a,int b)" <<std::endl;
	return (a>b) ? a:b;
}

double max(double a,int b,int c){
	std::cout << "inside (double a,int b, int c)" <<std::endl;
	return (a>b) ? a:b;
}

int main(int argc, char** argv){

	int int_value1{41};
	int int_value2{29};

	double double_value1{47.2};
	double double_value2{55.12};

	std::string_view first{"Hello"};
	std::string_view second{" World!"};

	std::cout << "max (" << int_value1 << " , " << int_value2 << ") : " << max(int_value1,int_value2) << std::endl;

	std::cout << "max (" << 5 << " , " << 7 << ") : " << max(int_value1,int_value2) << std::endl;

	std::cout << "max (" << double_value1 << " , " << double_value2 << ") : " << max(double_value1,double_value2) << std::endl;
	
	std::cout << "max (" << first << " , " << second << ") : " << max(first,second) << std::endl;

	std::cout << "max (dog,cat): " << max("dog","cat") << std::endl; // string literal convert to string view

	std::cout << "max (" << int_value1 << " , " << double_value2 << ") : " << max(int_value1,double_value2) << std::endl;

	std::cout << "max (" << double_value1 << " , " << int_value2 << ") : " << max(double_value1,int_value2) << std::endl;

	std::cout << "max (" << double_value1 << " , " << int_value2 << ") : " << max(double_value1,int_value2,int_value1) << std::endl;

	return 0;
}