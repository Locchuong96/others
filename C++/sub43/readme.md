### Declare and use array

You can create a array `int scores[10]`

Or you can create and assign values for an array at the same time: `int scores[5] {1,2,3,4,5}`

Or declare a Omit size array: `int class_sizes[] {10,12,15,11,18,17}`

Or decalare a constant array can be modify:

	// Constant arrays, can't be modified
	const int multipliers [] {22,30,15};
	multipliers[1] = 20; // Can be change elements of a const array: ERROR

Example:

	#include <iostream>

	int main(){
	    int class_sizes[] {10,12,15,11,18,17,12,13,14,16};
	    // Range base for loop
	    for(auto value:class_sizes){
	        std::cout << "value : " << value << std::endl;
	    }
	 	return 0;
	}

Example:

	#include <iostream>
	int main(){
		// Declaring an array
		int scores[10]; // An array storing 10 integers
		//Reading values, must be random value
		std::cout << std::endl;
		std::cout << "Reading out score values (manually) : " << std::endl;
		for(size_t i=0; i <10;i++){
			std::cout << "score[" << i << "] : " << scores[i] << std::endl;
	 	}
	 	return 0;
	}

Assign data in an array:

	// Assign data in an array
	for(size_t i=0;i<10;i++){
		scores[i] = i;
	}

*Note*: The index inside the array is going from zero

Array bounds

	//Reading past bounds of your array: BAD!
	// It;s going to read out something you did not put there.
	std::cout << "scores[10] : " << scores[10] << std::endl;
	// Writting out of bounds is also BAD!
	scores[22] = 300
