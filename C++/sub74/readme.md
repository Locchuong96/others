### Pass by reference

Pass by reference: systax

	#include <iostream>
	void say_age(int& age);
	int main(int argc, char ** argv){
		int age {23};
		std::cout << "age-before: " << age << std::endl;
		say_age(age);
		std::cout << "age-after: " << age << std::endl;
		return 0;
	}
	void say_age(int& age){
		++age;
		std::cout << "Hello! You are: " << age << " years old." << std::endl;
	}

The changing in function will effect to the global