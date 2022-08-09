### C++ Program Execution model & memory model

	#include <iostream>
	int add_numbers (int a,int b){
		return a+b;
	}
	int main(){
		int a = 10,
		int b = 5,
		int c,
		std::cout << "Statement1" << std::endl;
		std::cout << "Statement2" << std::endl;
		c = add_numbers(a,b);
		std::cout << "Statement3" << std::endl;
		std::cout << "Statement4" << std::endl;
		return 0;
	}

compile to something mean this:

	a = 10 (int)
	b = 5 (int)
	c (int)
	print("Statement1")
	print("Statement2")
	c = f_add(a,b)
	print("Statement3")
	print("Statement4")
	end
