#include <iostream>
//#include <ios>
#include <iomanip>

int main(){

	// std::endl
	std::cout << "Hello";
	std::cout << "World";

	std::cout << std::endl;

	std::cout << "-------------" << std::endl;

	std::cout << "Hello" << std::endl;
	std::cout << "World" << std::endl;

	std::cout << std::endl;

	std::cout << "Hello\n" << std::endl;
	std::cout << "World\n" << std::endl;

	// std::setw
	std::cout << std::endl;
	std::cout << "Unformatted table: " << std::endl;
	std::cout << "Lastname" << " " << "Firstname" << "Age" << std::endl;
	std::cout << "Daniel" << " " << "Gray" << "25" << std::endl;
	std::cout << "Stanley" << " " << "Woods" << "33" << std::endl;
	std::cout << "Jordan" << " " << "Parker" << "45" << std::endl;
	std::cout << "Joe" << " " << "Ball" << "21" << std::endl;
	std::cout << "Josh" << " " << "Carr" << "27" << std::endl;
	std::cout << "Izaiah" << " " << "Robinson" << "29" << std::endl;

	std::cout << std::endl;
	std::cout << "Formatted table : " << std::endl;

	std::cout << std::setw(10) << "Lastname" << std::setw(10) << "Firstname" << std::setw(5) << "Age" << std::endl;
	std::cout << std::setw(10) << "Daniel" << std::setw(10) << "Gray" << std::setw(5) << "25" << std::endl;
	std::cout << std::setw(10) << "Stanley" << std::setw(10) << "Woods" << std::setw(5) << "33" << std::endl;
	std::cout << std::setw(10) << "Jordan" << std::setw(10) << "Parker" << std::setw(5) << "45" << std::endl;
	std::cout << std::setw(10) << "Joe" << std::setw(10) << "Ball" << std::setw(5) << "21" << std::endl;
	std::cout << std::setw(10) << "Josh" << std::setw(10) << "Carr" << std::setw(5) << "27" << std::endl;
	std::cout << std::setw(10) << "Izaiah" << std::setw(10) << "Robinson" << std::setw(5) << "29" << std::endl;

	// std::right and std::internal
	std::cout <<std::endl;
	std::cout << "Internal justified : " << std::endl;
	std::cout << std::right;
	std::cout << std::setw(10) << -123.45 << std::endl;
	std::cout << std::internal;
	std::cout << std::setw(10) << -123.45 << std::endl;

	//std::setfill()

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

	// std::hex , std::dec , std::oct


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


	return 0;
}