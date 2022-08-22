#include <iostream>

int main(){

	int d {45};
	int e {20};
	int f {11};

	std::cout << std::endl;
	std::cout << "Relational and logic operations on integers" << std::endl;
	std::cout << "d : " << d << std::endl;
	std::cout << "e : " << e << std::endl;
	std::cout << "f : " << f << std::endl;

	std::cout << std::endl;

	std::cout << " (d > e) && ( d > f) :" << ((d > e) && ( d > f)) <<std::endl;
	std::cout << " (d == e) || ( e <= f) :" << ((d == e) || ( e <= f)) <<std::endl;
	std::cout << " (d < e) || ( d > f) :" << ((d < e) || ( d > f)) <<std::endl;
	std::cout << " (f > e) || ( d < f) :" << ((f > e) || ( d < f)) <<std::endl;
	std::cout << " (d > f) && ( f <= d) :" << ((d > f) && ( f <= d)) <<std::endl;
	std::cout << " (d > e) && ( d <= f) :" << ((d > e) && ( d <= f)) <<std::endl;
	std::cout << " !d :" << ! d <<std::endl;
	std::cout << " (!d) && ( d  == e ) :" << ((! d) && ( d  == e )) <<std::endl;
	return 0;
}