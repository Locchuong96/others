### If statement

example:

	#include <iostream>

	int main(){
		int number1 {55};
		int number2 {60};

		bool result = (number1 < number2); // Expression yeilding the condition
		std::cout << std::boolalpha << "result : " << result << std::endl;

		std::cout << std::endl;
		std::cout << "free standing if statement" << std::endl;

		if(result == true){
			std::cout << number1 << " is less than " << number2 << std::endl;
		}

		// if the result is false
		if(!(result == true)){
			std::cout << number1 << " is NOT less than " << number2 << std::endl;
		}
	}

Or you can expression as condition directly

	std::cout << std::endl;
	std::cout << "Using expression as condition: " << std::endl;

	if (number1 < number2){
		std::cout << number1 << " is less than " << number2 << std::endl;
	}

	if (!(number1 < number2)){
		std::cout << number1 << " is less than " << number2 << std::endl;
	}

Or

	std::cout << std::endl;
	std::cout << "Using expression as condition: " << std::endl;

	if (number1 < number2){
		std::cout << number1 << " is less than " << number2 << std::endl;
	}

	else {
		std::cout << number1 << " is less than " << number2 << std::endl;
	}

We can nest the if statement

	std::cout << std::endl;
	std::cout << "Police officer stops(verbose)" << std::endl;
	if(green){
		if(police_stop){
			std::cout << "Stop" << std::endl;
		}
		else{
			std::cout << "Go" << std::endl;
		}
	}

Nesting alternative

	std::cout << std::endl;
	std::cout << "Police officier stops(less verbose)" << std::endl;
	if (green && ! police_stop){
		std::cout << "Go" << std::endl;
	}
	else{
		std::cout << "Stop" << std::endl;
	}