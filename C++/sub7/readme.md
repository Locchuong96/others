
example1: 

	#include  <iostream>
	int main(){
	    std::cout << "Number1";
	    std::cout << "Number2";
	}

endline `std::endl`

	#include  <iostream>
	int main(){
	    std::cout << "Number1" << std::endl;
	    std::cout << "Number2";
	}

example2: 

	#include <iostream> // libary print thing in the console
	// main function is the entrypoint of cplusplus program
	int main(){
		std::cout << "Hello World" << std::endl;
		return 0;
	}

example3:

	#include <iostream> // libary print thing in the console
	constexpr int get_value(){
		return 3;
	}
	// main function is the entrypoint of cplusplus program
	int main(){
		constexpr int value = get_value();
		std::cout << "value : " << value << std::endl;
		return 0;
	}

`consteval` is not exist