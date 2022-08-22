### number limits

`#include <limits>`

**Floating point value**

- lowest the lowest value of your variable: `-3.40282e+38`
- zero: `0`
- min value you can represent with tha variable: `1.17549e-38`
- max  value you can represent with tha variable: `3.40282e+38`

**Signed integer**

- lowest the lowest value of your variable:
- zero: `0`
- min value you can represent with tha variable (the minimum will be negative if you are using signed integer): `-32768`
- max  value you can represent with tha variable: `32767`

**Unsigned integer(short)**

- lowest the lowest value of your variable:
- zero: `0`
- min value you can represent with tha variable: `0`
- max  value you can represent with tha variable: `65535`

These function help we find the limit of the variable datatype

`std::numeric_limits<T>::min();`

`std::numeric_limits<T>::max();`

`std::numeric_limits<T>::lowest();`

	The range for short :-32768 - 32767
	The range for unsigned short :0 - 65535
	The range for signed short :-32768 - 32767
	The range for int :-2147483648 - 2147483647
	The range for unsigned int :0 - 4294967295
	The range for signed int :-2147483648 - 2147483647
	The range for long :-9223372036854775808 - 9223372036854775807
	The range for unsigned long :0 - 18446744073709551615
	The range for signed long :-9223372036854775808 - 9223372036854775807
	The range for float :1.17549e-38 - 3.40282e+38
	The range (with lowest)for float is from: -3.40282e+38
	The range for double :2.22507e-308 - 1.79769e+308
	The range (with lowest)for double is from: -1.79769e+308

Other facilities

check signed: `std::cout << "int is signed: " << std::numeric_limits<int>::is_signed << std::endl;`
check digits: `std::cout << "int digits: " << std::numeric_limits<int>::digits << std::endl;`

### references

https://en.cppreference.com/w/cpp/types/numeric_limits