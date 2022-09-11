### Size of an array

Can get the size with `std::size` (number of element) on C++17, Example:

	#include <iostream>

	int main(){
		int scores[] {10,12,15,11,18,17,22,23,24};

		// Can get the size with std::size
		std::cout << "scores size: " << std::size(scores) << std::endl;

		// Print data out 
		for(size_t i{0};i < std::size(scores);++i){
			std::cout << "scores [" << i << "] : " << scores[i] << std::endl;
		}
		return 0;
	}

Array size with `sizeof`:

	//Array size with sizeof
	std::cout << "size of scores : " << sizeof(scores) << std::endl;
	std::cout << "size of scores[0] : " << sizeof(scores[0]) << std::endl;
	std::cout << "score item count " << (sizeof(scores)/sizeof(scores[0])) << std::endl;

Print all the element in score array:

	for(auto i: scores){
		std::cout << i << std::endl;
	}