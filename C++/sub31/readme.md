### Math functions

`#include <cmath>`

- `std::floor()`: round down

- `std::ceil()`: round up

Example:

	double weight {7.7};
	//floor
	std::cout << "Weight rounded to floor is : " << std::floor(weight) << std::endl;
	//ceil
	std::cout << "Weight rounded to ceil is : " << std::ceil(weight) << std::endl;


- `std::abs()`: get absolute value

Example:

	double savings {-5000};
	weight = 7.7;
	std::cout << "Abs of weight is : " << std::abs(weight) << std::endl;
	std::cout << "Abs of savings is : " << std::abs(savings) << std::endl;

- `std::exp()`: exp(x) = e^(x) where e = 2.71828...

Example:

	double exponential = std::exp(10);
	std::cout << "The exponential of 10 is : " << exponential << std::endl;

- `std::pow()`:

Example:

	std::cout << "3 ^ 4 is: " << std::pow(3,4) << std::endl;
	std::cout << "9 ^ 3 is: " << std::pow(9,3) << std::endl;

- `std::log()`: `log` is lograrit of e, `log10` is lograrit 10

Example:

	std::cout << "e^? = 54.59: " << std::log(54.59) << std::endl;
	std::cout << "10^? = 10000: " << std::log10(10000) << std::endl;


- `std::sqrt()`: square root

Example:

	std::cout << "The square root of 81 is: " << std::sqrt(81) << std::endl;

- `std::round()`: Halfway points are rounded away from 0

Example:

	std::cout << "3.654 rounded to: " << std::round(3.654) << std::endl;
	std::cout << "2.5 rounded to: " << std::round(2.5) << std::endl;
	std::cout << "2.4 rounded to: " << std::round(2.4) << std::endl;

- `std::sin()`:

- `std::cos()`:

- `std::tan()`:

### references

https://en.cppreference.com/w/cpp/header/cmath
