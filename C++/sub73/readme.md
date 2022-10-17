### Pass by pointer

Pass by pointer: syntax

	#include <iostream>

	void say_age(int* age);

	int main(int argc,char **argv){
		int age {23};
		std::cout << "age - before: " << age << std::endl;
		say_age(&age);
		std::cout << "age - after: " << age << std::endl;
		return 0;
	}

	void say_age(int* age){
		++(*age); // Changing the copy. Outside age not affected
		std::cout << "Hello! You are " << *age << " years old." << std::endl;
	}

The param is pointer and when you use function need pointer param `*a` you have give it address `&a`, The function will touch the memory of param variable and change it even you go outside the function

`int* a` declare pointer
`*a` value of pointer
`&a` address of pointer

