### Function templates

Function blueprints

Code repetition:

	int max(int a, int b){
		return (a > b)? a:b;
	}

	double max(double a, double b){
		return (a >b)? a : b;
	}

	std::string_view max(std::string_view a, std::string_view b){
		return (a>b)? a :b;
	}

Function blue print, this is not a function, just a form to generate the function

	template <typename T>
	T maximum(T a, T b){
		return (a>b)? a:b;
	}