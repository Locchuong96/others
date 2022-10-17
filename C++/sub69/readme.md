### First hand on functions

a function is a reusable piece of code that can take a number of optional inputs and produce some desirable output, `[input] -> [Function Processing] -> [output]`. Function structure:

	return_type function_name (param1,param2,...){
		// Operations
		return return_type
	}

Example of `no input, no output`

	void function_name (){
		// Operations
		return return_type
	}

Function signature : `function_signature = function_name + function_parameters`

Calling(using) a function: `result_var = function_name (arg1,arg2)`

Example:

	// Function that takes  single parameter, and does not give back result explicitly
	void enter_bar(int age){
		if (age > 18){
			std::cout << "You are " << age << "years old. Please proceed." << std::endl;
		}
		else{
			std::cout << "Sorry you are too young for this, No offense! " << std::endl;
		}
	}

Function that takes multiple parameters and returns the result of the computation

	int max(int a, int b){
		if(a>b){
			return a;
		}
		else
			return b;
	}

arguments is the thing you put in the place of parameter.

Function that does not take parameters and returns nothing

	void say_hello(){
		std::cout << "Hello there" << std::endl;
		return ; // You could omit this return statement for functions returning void
	}

Function that takes no parameters and return something

	int lucky_number(){
		return 99;
	}

Implicit conversions in functions, the arguments you pass in may be does not match the parameter's type but it still work.

	int min(int a, int b){
		if (a < b){
			return a;
		}
		else{
			return b;
		}
	}

	char d{55};
	char e{51};
	double f{12.33};
	double g{51.25};
	std::cout << std::endl;
	std::cout << "Calling min function with char arguments: " << std::endl;
	std::cout << "Calling min function with char arguments: " << std::endl;
	int minimum_number {min(d,e)}; // d,e implicitly converted to int
	std::cout << "min(" << static_cast<int>(d) << "," << static_cast<int>(e) << ") : " << minimun_number << std::endl;
	// double will undergo an implicit narrowing conversion
	// from double to int. Info after decimal point will be lost
	std::cout << std::endl;
	std::cout << "Calling min function with double arguments: "<< std::endl;
	minimum_number = min(f,g);
	std::cout << "min(" << f << "," << g << ") : " << minimum_number << std::endl;

Argument scope: COPIES

	// Parameters passed this way are scoped localy in the function.
	// Changes to them are not visible outside the function, what we
	// have inside the function are actually COPIES of the arguments passed to the function
	double increment_multiply(double a, double b){
		std::cout << "Inside function, before increment: " << std::endl;
		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		double result = ((++a) * (++b));
		std::cout << "Inside functionn, after increment: " << std::endl;
		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		//Returning the result
		return result;
	}