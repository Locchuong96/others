#include <iostream>

int main(){
	const int COUNT {10};
	// ++i will be 9 time (1-9), i++ will be 10 time (0-9)
	for(unsigned int i {}; i < COUNT; i++){
		std::cout << "I love C++ time" << i << std::endl;
	}
	return 0;
}