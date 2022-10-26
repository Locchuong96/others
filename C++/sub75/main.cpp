#include <iostream>
#include <string>

void max_str(const std::string& input1,const std::string input2,std::string& output){
	if(input1 > input2){
		output = input1;
	}
	else{
		output = input2;
	}
}

void max_int(int input1, int input2, int& output){
	if(input1 > input2){
		output = input1;
	}
	else{
		output = input2;
	}
}

void max_double(double input1,double input2,double* output){
	if (input1 > input2){
		*output = input1;
	}
	else{
		*output = input2;
	}
}

int main(int argc, char** argv){

	// std::string out_str;
	// std::cout << "out_str (before): " << max_str << std::endl;
	// std::string string1("Cassablanca");
	// std::string string2("Bellevue");
	// max_str(string1,string2,out_str);
	// std::cout << "out_str (after) max_str: " << out_str << std::endl;

	// int num1 {93};
	// int num2 {43};
	// int num3 {0};	
	// std::cout << "num3 (before): " << num3 << std::endl;
	// max_int(num1,num2,num3);
	// std::cout << "num3 (after): " << num3 << std::endl;

	double num1 {93.0};
	double num2 {43.0};
	double num3 {0.0}; // declare var

	std::cout << "num3 (before): " << num3 << std::endl;
	
	max_double(num1,num2,&num3); // pass var address
	
	std::cout << "num3 (after): " << num3 << std::endl;

	return 0;
}