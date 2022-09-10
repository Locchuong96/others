#include <iostream>

bool red = false;
bool green {true};
bool yellow {false};
bool police_stop {true};

// If green: go
// If red, yellow: stop
// If green and police_stop: stop 

int main(){
	if (red){
	std::cout << "Stop" << std::endl;
	}

	if (yellow){
		std::cout << "Slow down" << std::endl;
	}

	if (green){
		std::cout << "Go" << std::endl;
	}
}