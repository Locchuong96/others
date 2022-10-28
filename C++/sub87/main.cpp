# include <iostream>
# include <string>
# include <cstring>

// Function template
template <typename T> T maximum(T a, T b);

// Template specialization
template <>
const char* maximum<const char*> (const char* a, const char* b);

int main(int argc,char** argv){

	int a{10};
	int b{23};

	double c{34.7};
	double d{23.4};

	std::string e{"wild"};
	std::string f{"animal"};
	
	const char* g{"hello"};
	const char* h{" world!"};

	auto max_int = maximum(a,b); // int type deduced
	auto max_double = maximum(c,d); // double type deduced
	auto max_str = maximum(e,f); // string type deduced

	// This won't do what  you would expect: BEWARE!
	std::cout << "max (const char*): " << maximum(g,h) << std::endl;

	return 0;
}

template <typename T> T maximum(T a, T b){
	return (a > b) ? a : b;
}

template <>
	const char* maximum<const char*>(const char* a, const char* b){
		return (std::strcmp(a,b) > 0) ? a:b;
	}