### Input and Output function parameters

- Output parameters should be passed in such a way that you can modify the arguments from inside the function. Options are passing by reference or by pointer. References are preferred in C++.

- Input parameters should not be modifiable from inside a function. The function really need to get input (read) from the arguments. You enforce modification restirctions with the const keyword. Options are passing by const reference, passing by pointer to const, or even passing by const pointer to const.

The changing value inside the function will be visible outside the function. be reference or pointer. Not return mechanism

func1:

	void max_str(const std::string& input1, const std::string input2, std::string& output){
		if(input1 > input2){
			output = input1;
		}
		else{
			output = input2;
		}
	}

func2:

	void max_int(int input1, int input2, int& output){
		if(input1 > input2){
			output = input1;
		}
		else{
			output = input2;
		}
	}

func3:

	void max_double(double input1,double input2,double* output){
		if(input1 > input2){
			*output = input1;
		}
		else{
			*ouput = input2;
		}
	}

Example:

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

	int main(int argc, char** argv){

		std::string out_str;
		std::string string1("Alabama");
		std::string string2("Bellevue");
		max_str(string1,string2,out_str);
		std::cout << "max_str: " << out_str << std::endl;

		return 0;
	}