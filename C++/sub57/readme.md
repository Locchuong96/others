### Dynamic arrays

Dynamic arrays allocated the heap with the `new` operator. Can also use the `std::nothrow` version of `new`.

	# include <iostream>
	int main(int argc, char* argv){
		 const size_t size {10}; // declare variable size = 10,MUST BE const variable
		// Different ways you can declare an array
		// dynamically and how they are initialized
		double* p_salaries {new double[size]} ; // salaries array will contain garbage values
		
		int* p_students { new(std::nothrow) int[size]{} }; // All values initialized to 0
		double *p_scores { new(std::nothrow) double[size]{1,2,3,4,5}}; // Allocating memory space, for an array of size double
																		// vars, First 5 will be initialized , with 1,2,3,4,5 and the rest will be 0's


	}

Check nullptr

	//nullptr check and use the allocated array
		if(p_scores){
			// Print out elements, Can use regular array access notation, or pointer arithmetic
			for (size_t i{}; i < size; ++i){
				std::cout << "value: " << p_scores[i] << " : " << *(p_scores + i) << std::endl;
			}
		}

Releasing memory [array version]

	delete[] p_scores;
	p_scores = nullptr;
	delete[] p_students;
	p_students = nullptr;
	delete[] p_salaries;
	p_salaries = nullptr;

Pointers and array are different

	//Pointer initialized with dynamic array are different from arrays:
	//std::size does not work on them, and they don't support range based for loops
	double *temperatures = new double[size] {10.0,20.0,30.0,40.0,50.0,60.0,70.0,80.0,90.0,100.0};
	//std::cout << "std::size(temperatures): " << std::size(temperatures) << std::endl; // Error
	//Error: temperatures doesn't have array properties that needed for the range for loop to work.
	for (double temp: temperatures){
		std::cout << "temperature: " << temp << std::endl;
	}
	// We say that dynamically allocated array has decayed into a pointer

Static array vs dynamic array
	
	// static array allocated on the stack memory
	int scores[10] {1,2,3,4,5,6,7,8,9,10};
	std::cout << "scores size : " << std::size(scores) << std::endl;
	for (auto s: scores){
		std::cout << "value: " << s << std::endl;
	}

	// dynamic array allocated on the heap memory
	int* p_scores1 = new int[10] {1,2,3,4,5,6,7,8,9,10};
	std::cout << "p_scores1 size: " << std::size(p_scores1) << std::endl;
	for(auto s: p_scores1){
		std::cout << "value: " << std::endl;
	}