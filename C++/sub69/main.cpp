#include <iostream>

// Function that takes  single parameter, and does not give back result explicitly
void enter_bar(int age){
	if (age > 18){
		std::cout << "You are " << age << "years old. Please proceed." << std::endl;
	}
	else{
		std::cout << "Sorry you are too young for this, No offense! " << std::endl;
	}
}

int max(int a, int b){
		if(a>b){
			return a;
		}
		else
			return b;
	}

int min(int a, int b){
		if (a<b){
			return a;
		}
		else{
			return b;
		}
	}

//Function that does not take parameters and return nothing
void say_hello(){
	std::cout << "Hello there" << std::endl;
	return; // You could omit this return statement for functions returning void
}

//Function that takes no parameters and return something
int lucky_number(){
	return 99;
}

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

int main(int argc, char **argv){
	
	char d{55};
	char e{51};
	double f{12.33};
	double g{12.25};
	std::cout << std::endl;
	std::cout << "Calling min function with char arguments: " << std::endl;
	std::cout << "Calling min function with char arguments: " << std::endl;
	int minimum_number {min(d,e)}; // d,e implicitly converted to int
	std::cout << "min(" << static_cast<int>(d) << "," << static_cast<int>(e) << ") : " << minimum_number << std::endl;
	
    // double will undergo an implicit narrowing conversion
	// from double to int. Info after decimal point will be lost
    std::cout << std::endl;
	std::cout << "Calling min function with double arguments: "<< std::endl;
	minimum_number = min(f,g);
	std::cout << "min(" << f << "," << g << ") : " << minimum_number << std::endl;

    f = 45.56;
    g = 23.23;
    
    std::cout << std::endl;
	std::cout << "Argument scope: COPIES " << std::endl;
	std::cout << "Outside function, before increment: " << std::endl;
	std::cout << "f: " << f << std::endl;
	std::cout << "g: " << g << std::endl;

	double maximum_number = increment_multiply(f,g);
	
	std::cout << "maximum_number " << maximum_number << std::endl;
	std::cout << "Outside function, after increment: " << std::endl;
	std::cout << "f: " << f << std::endl;
	std::cout << "g: " << g << std::endl;
	
	return 0;
}