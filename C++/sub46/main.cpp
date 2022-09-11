#include <iostream>

int main(){
	int numbers[] {1,2,3,4,5,6,7,8,9,0};

	// Read beyond bounds: will read garbage or crash your program
	std::cout << "numbers[12] " << numbers[12] << std::endl;

	//Write beyond bounds, will be lost data
	numbers[12] = 1000;
	std::cout << "numbers[12] : " << numbers[12] << std::endl;
	return 0;
}