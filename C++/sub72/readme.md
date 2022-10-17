### Pass by value

Pass by value: syntax:

	#include <iostream>

	void say_age(int age);

	int main(int argc, char ** argv){
		int age {23};
		std::cout << "age-before: " << age << std::endl;
		say_age(age);
		std::cout << "age-after: " << age << std::endl;
		return 0;
	}

	void say_age(int age){
		++age; // Changing the copy. Outside age not affected
		std::cout << "Hello! You are: " << age << " years olds." << std::endl;
	}