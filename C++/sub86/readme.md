### Template type parameters by reference

	template <typename T> T maximum(T a, T b);

	int main(int argc,char ** argv){

		double a {23.5};
		double b {51.2};

		std::cout << "Out - &a" << &a << std::endl;
		double max1 = maximum(a,b);
		std::cout << "max1: " << max1 << std::endl;

		return 0;
	}

	template <typename T> T maximum(T a, T b){
		std::cout << "In - &a: " << &a << std::endl;
		return (a > b) ? a : b;
	}

Template type parameters by reference

	template <typename T> const T& maximum(const T& a, const T& b);
	int main(int argc, char **argv){
		double a {23.5};
		double b {51.2};

		std::cout << "Out - &a: " << &a << std::endl;
		double max1 = maximum(a,b);
		std::cout << "max1: " << max1 << std::endl;
		return 0;
	}

	template <typename T> const T& maximum(const T& a, const T& b){
		std::cout << "In - &a: " << &a << std::endl;
		return (a > b) ? a:b;
	}

*Note* Confuse your compiler!

	template <typename T> T maximum(T a,T b);
	template <typename T> const T& maximum(const T& a, const T& b);
	int main(int argc,char ** argv){
		double a {23.5};
		double b {51.2};

		std::cout << "Out - &a: " << &a << std::endl;
		double max1 = maximum(a,b); //By value? By reference? Compiler error
		std::cout << "max1: " << max1 << std::endl;
	}