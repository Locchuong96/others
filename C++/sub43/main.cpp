#include <iostream>

int main(){
	// Declaring an array
	int scores[10]; // An array storing 10 integers

	// Declare and initialize at the same time
	double salaries[5] {12.7,7.5,13.2,8.1,9.3};

	const numbers[] {1,2,3,4,5,6}

	// Assign data in an array
	for(size_t i=0;i<10;i++){
		scores[i] = i;
	}

	//Reading values, must be random value it you don't assign values
	std::cout << std::endl;
	std::cout << "Reading out score values (manually) : " << std::endl;
	for(size_t i=0; i <10;i++){
		std::cout << "score[" << i << "] : " << scores[i] << std::endl;
 	}

 	// Reading salary
 	for (size_t i {0};i<5:i++){
 		std::cout << "salary[" << i <<"] : " << salaries[i] << std::endl;
 	}
 	return 0;
}