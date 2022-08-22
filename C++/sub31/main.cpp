#include <iostream>
#include <cmath>

int main(){

	double weight {7.7};
	//floor
	std::cout << "Weight rounded to floor is : " << std::floor(weight) << std::endl;
	//ceil
	std::cout << "Weight rounded to ceil is : " << std::ceil(weight) << std::endl;

	//abs
	double savings {-5000};
	weight = 7.7;
	std::cout << "Abs of weight is : " << std::abs(weight) << std::endl;
	std::cout << "Abs of savings is : " << std::abs(savings) << std::endl;

	//exp
	double exponential = std::exp(10);
	std::cout << "The exponential of 10 is : " << exponential << std::endl;

	//pow
	std::cout << "3 ^ 4 is: " << std::pow(3,4) << std::endl;
	std::cout << "9 ^ 3 is: " << std::pow(9,3) << std::endl;

	//log
	std::cout << "e^? = 54.59: " << std::log(54.59) << std::endl;
	std::cout << "10^? = 10000: " << std::log10(10000) << std::endl;

	// sqrt
	std::cout << "The square root of 81 is: " << std::sqrt(81) << std::endl;

	// round
	std::cout << "3.654 rounded to: " << std::round(3.654) << std::endl;
	std::cout << "2.5 rounded to: " << std::round(2.5) << std::endl;
	std::cout << "2.4 rounded to: " << std::round(2.4) << std::endl;

    return 0;

}