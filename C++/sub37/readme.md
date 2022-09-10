### Teranry Operator

Example:

	#include <iostream>

	int main(){
		int max {};
		int a {35};
		int b {20};

		std::cout << std::endl;
		std::cout << "Using regular if " << std::endl;

		if (a > b){
			max = a;
		}
		else{
			max = b;
		}

		std::cout << "max : " << max << std::endl;
	}

We can use `ternary expression` instead: `result = (condition) ? option1 : option2 ;`

`result = (condition) ? option1 : option2 ;` is equal to:

	if(condition){
		result = option1;
	}
	else{
		result = option2;
	}
	
Ternary Initialization

	std::cout << std::endl;
	std::cout << "speed" << std::endl;
	bool fast = false;
	int speed {fast ? 300 : 150}; // ternary initialization
	std::cout << "The speed is: " << speed << std::endl;
