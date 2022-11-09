# include <iostream>

class Dog{
	// Publish
	public:
		Dog() = default;

		void do_something(){}

	private:
		size_t leg_count;
		size_t arm_count;
		int * p_age;
};

int main(int argc,char** argv){

	Dog dog1;

	std::cout <<"sizeof(Dog): " << sizeof(Dog) << std::endl;
	std::cout <<"sizeof(dog1): " << sizeof(dog1) << std::endl;
	std::cout << "sizeof size_t: " << sizeof(size_t) << std::endl;
	std::cout << "sizeof size_t: " << sizeof(int*) << std::endl;
	// The string store text as const char pointer
	std::string name{"Hello"};
	std::string t{"Hello World!"};
	std::cout <<"sizeof(name): " << sizeof(name) << std::endl;
	std::cout <<"sizeof(t): " << sizeof(t) << std::endl;
	return 0;
}