#include <iostream>
#include <limits>

int main(){

	// short
	std::cout << "The range for short :" << std::numeric_limits<short>::min() << " - "
	 << std::numeric_limits<short>::max() << std::endl;
	std::cout << "The range for unsigned short :" << std::numeric_limits<unsigned short>::min() << " - " 
	<< std::numeric_limits<unsigned short>::max() << std::endl;
	std::cout << "The range for signed short :" << std::numeric_limits<signed short>::min() << " - " 
	<< std::numeric_limits<signed short>::max() << std::endl;

	// int
	std::cout << "The range for int :" << std::numeric_limits<int>::min() << " - "
	 << std::numeric_limits<int>::max() << std::endl;
	std::cout << "The range for unsigned int :" << std::numeric_limits<unsigned int>::min() << " - " 
	<< std::numeric_limits<unsigned int>::max() << std::endl;
	std::cout << "The range for signed int :" << std::numeric_limits<signed int>::min() << " - " 
	<< std::numeric_limits<signed int>::max() << std::endl;

	// long
	std::cout << "The range for long :" << std::numeric_limits<long>::min() << " - "
	 << std::numeric_limits<long>::max() << std::endl;
	std::cout << "The range for unsigned long :" << std::numeric_limits<unsigned long>::min() << " - " 
	<< std::numeric_limits<unsigned long>::max() << std::endl;
	std::cout << "The range for signed long :" << std::numeric_limits<signed long>::min() << " - " 
	<< std::numeric_limits<signed long>::max() << std::endl;

    // float
	std::cout << "The range for float :" << std::numeric_limits<float>::min() << " - "
	 << std::numeric_limits<float>::max() << std::endl;

	std::cout << "The range (with lowest)for float is from: " << std::numeric_limits<float>::lowest() << std::endl;

	// double
	std::cout << "The range for double :" << std::numeric_limits<double>::min() << " - "
	 << std::numeric_limits<double>::max() << std::endl;

	std::cout << "The range (with lowest)for double is from: " << std::numeric_limits<double>::lowest() << std::endl;


	return 0;
}