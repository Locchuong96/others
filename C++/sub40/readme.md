### while loop

If the condition still true, the while still alive

Example:

	#include <iostream>

	int main(){
		const unsigned int COUNT {10};
		
		unsigned int i {0};

		while (i < COUNT){
			std::cout << "i= " << i << " I love C++" << std::endl;
			++i;
		}

		return 0;
	}