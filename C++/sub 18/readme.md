### Fractional Numbers- Floating point types

Used to represent numbers with fractional parts in C++

|Type|Size|Precision (number after point)|Comment|
|---|---|---|---|
|float|4|7|-|
|double|8|15|Recommended default|
|long double|12|> double|-|

Control the precision from std::cout : `std::cout << std::setprecision(20);` need include header `#include <iomanip>`

Example:

	#include <iostream>
	#include <iomanip>
	int main(){
		float number1 {1.12345678901234567890f}; // 7 digits
		double number2 {1.12345678901234567890}; // 15'ish digits
		long double number3 {1.12345678901234567890L}; // +15 digits
		//Print out the sizes
		std::cout << std::setprecision(20);
		std::cout<< "sizeof float : " << sizeof(float) << " number1 : " << number1 << std::endl;
		std::cout<< "sizeof double : " << sizeof(float) << " number2 : " << number2 << std::endl;
		std::cout<< "sizeof long double : " << sizeof(float) << " number3 : " << number3 << std::endl;
		return 0;
	}

Precision gone wrong `float number4 {192400023};` (float can only handle 7 digit)

Problem not caught at compile time

	float number4 (19240023);
	number4 = number4 +1;
	std::cout << "Number4 is : " << number4 << std::endl;

Scientific Notation

- `double number5 {192400023};` = `double number6 {1.92400023e8};` `double number7 {1.924e8};`
- `double number8 {0.00000000003498};` = `double number9 {3.498e-11};`

References IEEE 754

*Note*

- Remember the suffixes when initializing floating point variables, otherwise the default will be double, `float number1 {1.1234f};` or `long double number3 {1.1234L};`
- Double works well in many situations, so you will see it used a lot.

- Device floating point number with zero: n(floating point)/0 = Infinity(+/-)

- Device 0.0 with 0.0: 0.0/0.0 = NaN

		#include <iostream>
		#include <iomanip>

		int main(){
		    double number10 {5.6};
		    double number11 {}; // Initialized to 0
		    double number12 {}; // Initialized to 0

		    // Infinity
		    double result {number10/number11};

		    std::cout << number10 << "/" << number11 << " yields " << result << std::endl;
		    std::cout << result << " + " << number10 << " yields " << result + number10 << std::endl;

		    // NaN
		    result = number11/number12;

		    std::cout << number11 << " / " << number12 << " = " << result << std::endl;
		    return 0;
		}