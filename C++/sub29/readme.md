### Output Formatting

We are using 2 libraries `#include <ios>` and `#include <iomanip>`,

Some manipulator:

- `std::endl`: new line

- `std::flush`: causes immediate sending of data to the device connected to the stream

- `std::showpos`: `showpos` and `noshowpos` show or hidden the + sign for positive number

		int pos_num {45};
		int neg_num {-35};

		std::cout << "pos_num : " << pos_num << std::endl;
		std::cout << "neg_num : " << neg_num << std::endl;

		std::cout << std::endl;
		std::cout << std::showpos;
		std::cout << "pos_num : " << pos_num << std::endl;
		std::cout << "neg_num : " << neg_num << std::endl;

		std::cout << std::endl;
		std::cout << std::noshowpos;
		std::cout << "pos_num : " << pos_num << std::endl;
		std::cout << "neg_num : " << neg_num << std::endl;

- `std::boolalpha` and `std::noboolalpha`

		bool condition {true};
		bool other_condition {false};
		std::cout << "conditon : " << condition << std::endl;
		std::cout << "other_condition : " << other_condition << std::endl;
		std::cout << std::endl;
		std::cout << std::boolalpha;
		std::cout << "conditon : " << condition << std::endl;
		std::cout << "other_condition : " << other_condition << std::endl;
		std::cout << std::endl;
		std::cout << std::noboolalpha;
		std::cout << "conditon : " << condition << std::endl;
		std::cout << "other_condition : " << other_condition << std::endl;

- `std::right`: Internal justified: sign is left justified, data is right justified

		std::cout <<std::endl;
		std::cout << "Internal justified : " << std::endl;
		std::cout << std::right;
		std::cout << std::setw(10) << -123.45 << std::endl;
		std::cout << std::internal;
		std::cout << std::setw(10) << -123.45 << std::endl;

- `std::left`:

		int col_width = 20;
		std::cout << std::endl;
	    std::cout << std::left;
		std::cout << std::setfill('-'); // The fill character
		std::cout << std::setw(col_width) << "Lastname" << std::setw(col_width) << "Firstname" << std::setw(5) << "Age" << std::endl;
		std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Gray" << std::setw(5) << "25" << std::endl;
		std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << "Woods" << std::setw(5) << "33" << std::endl;
		std::cout << std::setw(col_width) << "Jordan" << std::setw(col_width) << "Parker" << std::setw(5) << "45" << std::endl;
		std::cout << std::setw(col_width) << "Joe" << std::setw(col_width) << "Ball" << std::setw(5) << "21" << std::endl;
		std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(5) << "27" << std::endl;
		std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(5) << "29" << std::endl;

- `std::internal`: Internal justified: sign is left justified, data is right justified

		std::cout <<std::endl;
		std::cout << "Internal justified : " << std::endl;
		std::cout << std::right;
		std::cout << std::setw(10) << -123.45 << std::endl;
		std::cout << std::internal;
		std::cout << std::setw(10) << -123.45 << std::endl;

- `std::setfill()`: fill empty space with specific character

		int col_width = 20;
		std::cout << std::endl;
	    std::cout << std::left;
		std::cout << std::setfill('-'); // The fill character
		std::cout << std::setw(col_width) << "Lastname" << std::setw(col_width) << "Firstname" << std::setw(5) << "Age" << std::endl;
		std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Gray" << std::setw(5) << "25" << std::endl;
		std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << "Woods" << std::setw(5) << "33" << std::endl;
		std::cout << std::setw(col_width) << "Jordan" << std::setw(col_width) << "Parker" << std::setw(5) << "45" << std::endl;
		std::cout << std::setw(col_width) << "Joe" << std::setw(col_width) << "Ball" << std::setw(5) << "21" << std::endl;
		std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(5) << "27" << std::endl;
		std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(5) << "29" << std::endl;

- `std::setw()`: `std::cout << std::setw(10) << "Lastname" << std::setw(10) << "Firstname" << std::setw(5) << "Age" << std::endl;`

- `std::hex` , `std::dec` , `std::oct`:

		int pos_int {717171};
		int neg_int {-47347};
		double double_var {498.32};

		std::cout << std::endl;
		std::cout << "pos_int in different bases : " << std::endl;
		std::cout << "pos_int (dec) : " << std::dec << pos_int << std::endl;
		std::cout << "pos_int (hex) : " << std::hex << pos_int << std::endl;
		std::cout << "pos_int (oct) : " << std::oct << pos_int << std::endl;

		std::cout << std::endl;
		std::cout << "neg_int in different bases : " << std::endl;
		std::cout << "neg_int (dec) : " << std::dec << neg_int << std::endl;
		std::cout << "neg_int (hex) : " << std::hex << neg_int << std::endl;
		std::cout << "neg_int (oct) : " << std::oct << neg_int << std::endl;

		std::cout << std::endl;
		std::cout << "double_var in different bases : " << std::endl;
		std::cout << "double_var (dec) : " << std::dec << double_var << std::endl;
		std::cout << "double_var (hex) : " << std::hex << double_var << std::endl;
		std::cout << "double_var (oct) : " << std::oct << double_var << std::endl;

*Note* manipulator hex,dec,oct has no effect to floating point

- `std::fixed` and `std::scientific`:

		double a {3.14159265359};
		double b {2006.0};
		double c {1.34e-10};

		std::cout << std::endl;
		std::cout << "double values (default ): " << std::endl;
		std::cout <<  "a : " << a << std::endl;
		std::cout <<  "b : " << b << std::endl;
		std::cout <<  "c : " << c << std::endl;

		std::cout << std::endl;
		std::cout << "double values (fixed ): " << std::endl;
		std::cout << std::fixed;
		std::cout <<  "a : " << a << std::endl;
		std::cout <<  "b : " << b << std::endl;
		std::cout <<  "c : " << c << std::endl;

		std::cout << std::endl;
		std::cout << "double values (scientific ): " << std::endl;
		std::cout << std::scientific;
		std::cout <<  "a : " << a << std::endl;
		std::cout <<  "b : " << b << std::endl;
		std::cout <<  "c : " << c << std::endl;

		std::cout << std::endl;
		std::cout << "double values (back to defaults): " << std::endl;
		std::cout.unsetf(std::ios::scientific | std::ios::fixed);
		std::cout <<  "a : " << a << std::endl;
		std::cout <<  "b : " << b << std::endl;
		std::cout <<  "c : " << c << std::endl;


- `std::setprecision()`: the number of digits printed out for a floating point, default is 6

		double a = 	3.1415926535897932384626433832795;

		std::cout << std::endl;
		std::cout << "a (default precision(6)) : " << a << std::endl;
		std::cout << std::setprecision(10);
		std::cout << "a (default precision(10)) : " << a << std::endl;
		std::cout << std::setprecision(20);
		std::cout << "a (default precision(20)) : " << a << std::endl;
		std::cout << std::setprecision(50);
		std::cout << "a (default precision(50)) : " << a << std::endl;

- `std::showbase` and `std::noshowbase`: show the base for integral types

		int pos_int = 717171;

		std::cout << "pos_int (noshowbase: default):" << std::endl;
		std::cout << "pos_int (dec):"<<std::dec << pos_int << std::endl;
		std::cout << "pos_int (hex):"<<std::hex << pos_int << std::endl;
		std::cout << "pos_int (oct):"<<std::oct << pos_int << std::endl;

		std::cout << "pos_int (showbase: default):" << std::endl;
		std::cout << std::showbase;
		std::cout << "pos_int (dec):"<<std::dec << pos_int << std::endl;
		std::cout << "pos_int (hex):"<<std::hex << pos_int << std::endl;
		std::cout << "pos_int (oct):"<<std::oct << pos_int << std::endl;

- `std::uppercase` and `std::nouppercase`:

		int pos_int = 717171;

		std::cout << "pos_int (nouppercase: default):" << std::endl;
		std::cout << "pos_int (dec):"<<std::dec << pos_int << std::endl;
		std::cout << "pos_int (hex):"<<std::hex << pos_int << std::endl;
		std::cout << "pos_int (oct):"<<std::oct << pos_int << std::endl;

		std::cout << "pos_int (uppercase):" << std::endl;
		std::cout << std::uppercase;
		std::cout << "pos_int (dec):"<<std::dec << pos_int << std::endl;
		std::cout << "pos_int (hex):"<<std::hex << pos_int << std::endl;
		std::cout << "pos_int (oct):"<<std::oct << pos_int << std::endl;

- `std::showpoint` and `std::noshowpoint`: show trailing zeros if necessary

		double d {34.1};
		double e {101.99};
		double f {12.0};
		double g {45};

		std::cout << std::endl;
		std::cout << "noshowpoint (defualt) : " << std::endl;
		std::cout << "d : " << d << std::endl;
		std::cout << "e : " << e << std::endl;
		std::cout << "f : " << f << std::endl;
		std::cout << "g : " << g << std::endl;


		std::cout << std::endl;
		std::cout << std::showpoint;
		std::cout << "showpoint: " << std::endl;
		std::cout << "d : " << d << std::endl;
		std::cout << "e : " << e << std::endl;
		std::cout << "f : " << f << std::endl;
		std::cout << "g : " << g << std::endl;

![table](./table.png)

![table2](./table2.png)

**references**

[link](https://en.cppreference.com/w/cpp/io/manip)
