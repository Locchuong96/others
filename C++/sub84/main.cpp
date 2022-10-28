# include <iostream>
# include <string>

template <typename T> T maximum(T a, T b); // Declare maximum template function

int main(int argc, char ** argv){
	int a{10};
	int b{23};

	double c{34.7};
	double d{23.4};

	std::string e{"hello"};
	std::string f{" world"};

	std::cout << "max(int): " << maximum(a,b) << std::endl; // int version created
	std::cout << "max(double): " << maximum(c,d) << std::endl; //double version created
	std::cout << "max(string): " << maximum(e,f) << std::endl; // string version created

	return 0;
}

template <typename T> T maximum(T a, T b){
	return (a > b) ? a:b; // a and b must be support > operator, otherwise hard ERROR
} 