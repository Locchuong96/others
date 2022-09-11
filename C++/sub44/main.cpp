#include <iostream>

int main(){
	int scores[] {10,12,15,11,18,17,22,23,24};

	// Can get the size with std::size
	std::cout << "scores size: " << std::size(scores) << std::endl;

	//Array size with sizeof
	std::cout << "size of scores : " << sizeof(scores) << std::endl;
	std::cout << "size of scores[0] : " << sizeof(scores[0]) << std::endl;
	std::cout << "score item count " << (sizeof(scores)/sizeof(scores[0])) << std::endl;

	size_t count {sizeof(scores)/sizeof(scores[0])};

	// Print data out 
	std::cout << "Printing out array items : " << std::endl;
	for(size_t i{0};i < count;++i){
		std::cout << "scores [" << i << "] : " << scores[i] << std::endl;
	}
	return 0;
}