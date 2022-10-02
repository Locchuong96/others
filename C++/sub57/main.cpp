# include <iostream>

int main(int argc, char* argv){
	const size_t size {10}; // declare variable size = 10

	// Different ways you can declare an array
	// dynamically and how they are initialized

	double* p_salaries {new double[size]} ; // salaries array will contain garbage values
	
	int* p_students { new(std::nothrow) int[size]{} }; // All values initialized to 0

	double *p_scores { new(std::nothrow) double[size]{1,2,3,4,5}}; // Allocating memory space, for an array of size double
																	// vars, First 5 will be initialized , with 1,2,3,4,5 and the rest will be 0's

	//nullptr check and use the allocated array
	if(p_scores){
		// Print out elements, Can use regular array access notation, or pointer arithmetic
		for (size_t i{}; i < size; ++i){
			std::cout << "value: " << p_scores[i] << " : " << *(p_scores + i) << std::endl;
		}
	}

	delete[] p_scores;
	p_scores = nullptr;

	delete[] p_students;
	p_students = nullptr;

	delete[] p_salaries;
	p_salaries = nullptr;

}