### References and const

Non const reference

	// Non const reference
	std::cout << std::endl;
	std::cout << "Non const reference: " << std::endl;
	int age {27};
	int& ref_age{age};

	std::cout << "age: " << age << std::endl;
	std::cout << "ref_age: " << ref_age << std::endl;

	// Can modify original variable through reference
	std::cout << std::endl;
	std::cout << "Modify original variable through reference: " << std::endl;
	ref_age++; // Modify through reference
	std::cout << "age: " << age << std::endl;
	std::cout << "ref_age: " << ref_age << std::endl;

Const reference

	// const reference
	std::cout << std::endl;
	std::cout << "const references: " << std::endl;
	age = 30;
	const int& const_ref_age{age};
	std::cout << "age: " << age << std::endl;
	std::cout << "const_ref_age: " << const_ref_age << std::endl;
	// Try to modify throug const reference
	const_ref_age = 31; //Error
	

Duplicate const reference behavior with pointers

	// Can achieve the same thing as const ref with pointer: const pointer to const data
	// Remember that a reference by default is just like a const pointer, All we need to do is make the const pointer point to const data

	const int* const const_ptr_to_const_age{&age};
	*const_ptr_to_const_age = 32; // Error

You can not reference to a const

	const int& const weird_ref_age{age}; // Error

const applies to reference variable name. Not to original variable

	//const reference
	std::cout << std::endl;
	std:cout << "Const references: " << std::endl;
	age = 30;
	const int& const_ref_age{age};
	std::cout << "age: " << age << std::endl;
	std::cout << "const_ref_age: " << const_ref_age << std::endl;
	// Try to modify throug const reference
	const_ref_age = 31;