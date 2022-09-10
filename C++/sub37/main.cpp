#include <iostream>

int main(){
	int max {};
	int a {35};
	int b {20};

	std::cout << std::endl;
	std::cout << "Using regular if " << std::endl;

	// if (a > b){
	// 	max = a;
	// }
	// else{
	// 	max = b;
	// }

	max = (a>b) ? a : b;
	std::cout << "max : " << max << std::endl;
}