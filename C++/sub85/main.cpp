# include <iostream>
# include <string>

template <typename T> T maximum(T a,T b);

int main(int argc, char ** argv){
	int a{10};
	int b{23};
	double c{34.7};
	double d{23.4};
	std::string e{"hello"};
	std::string f{"world!"};

	auto result1 = maximum(a,b); // int type deduced
	auto result2 = maximum(c,d); // double type deduced
	auto result3 = maximum(e,f); //string type dedcued

	auto result4 = maximum<double>(c,d); //explicitly say that we want the double
							// version called, if an instance is not there
								// already, it will created
	auto result5 = maximum<double>(a,c); // Works, even if parameters are of different types
							// ther is implicit converison from int to double
								// for the first parameter
	//maximum<double>(a,e); // Error: can not vonvert std::string to double
	std::cout << "maximum(int,int): " << result1 << std::endl;
	std::cout << "maximum(double,double): " << result2 << std::endl;
	std::cout << "maximum(string,string): " << result3 << std::endl;
	std::cout << "maximum(double,double): " << result4 << std::endl;
	std::cout << "maximum(int,double): " << result5 << std::endl;
	return 0;
}

template <typename T> T maximum(T a, T b){
	return (a > b)? a:b;
};
