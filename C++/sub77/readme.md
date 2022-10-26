### Function Overloading

Function overload is the mechanism you can use a function with multi type parameters.

	int max(int a,int b);
	double max(double a, double b);
	std::string max(const std::string& a, const std::string& b);

if you call the `max(a,b)` inside your code and the compiler will decide which one fit for your function