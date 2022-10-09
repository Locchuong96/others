### Comparing References to pointers

|References|Pointers|
|---|---|
|<ol><li>Don't use dereferencing for reading and writing</li>
<li>Can not be changed to reference something else</li>
<li>Must be initialized at declaration</li>
</ol>|<ol><li>Must go through dereference operator to read/write through pointed to value</li>
<li>Can be changed to point somewhere else</li>
<li>Can be declared un-initialized (will contain garbage addresses)</li>
</ol>|

Declare pointer and reference
	
	double double_value {12.34};
	double& ref_double_value {double_value}; // Reference to double_value
	double* p_double_value {&double_value}; // Pointer to double_value

Writing to pointer

	std::cout << std::endl;
	std::cout << "Writing through pointer: " << std::endl;
	*p_double_value = 15.44;

Can not make a reference refer to something else

	double double_value {12.34};
	double& ref_double_value {double_value}; //Reference to double_value
	double other_double_value{100.23};

	// This works, but it doesn't make ref_double_value reference to other_double_value
	// it merely changes the value referenced by ref_double_value to 100.23
	// Visualized this slides.
	ref_double_value = other_double_value;
	std::cout << "double_value: " << double_value << std::endl;
	std::cout << "other_double_value: " << other_double_value << std::endl;
	std::cout << "ref_double_value: " << ref_double_value << std::endl;
	// If you change ref_double_value now, other_double_value stays the same
	other_double_value = 55.1;
	std::cout << "double_value: " << double_value << std::endl;
	std::cout << "other_double_value: " << other_double_value << std::endl;
	std::cout << "ref_double_value: " << ref_double_value << std::endl;

A Pointer can point somewhere else

	// A pointer can poin somewhere else
	std::cout << std::endl;
	std::cout << "A pointer can point somewhere else: " << std::endl;
	p_double_value = & other_double_value;

	std::cout << "double_value: " << double_value << std::endl;
	std::cout << "ref_double_value: " << ref_double_value << std::endl;
	std::cout << "p_double_value: " << p_double_value << std::endl;
	std::cout << "*p_double_value: " << *p_double_value << std::endl;
	std::cout << "other_double_value: " << other_double_value << std::endl;

	std::cout << std::endl;
	std::cout << "Changing the now pointed to value: " << std::endl;

	*p_double_value = 555.66;

	std::cout << "double_value: " << double_value << std::endl;
	std::cout << "ref_double_value: " << ref_double_value << std::endl;
	std::cout << "p_double_value: " << p_double_value << std::endl;
	std::cout << "*p_double_value: " << *p_double_value << std::endl;
	std::cout << "other_double_value: " << other_double_value << std::endl;

References are somewhat like const pointers, you can make a reference refer to something else

	// References behave like constant pointers, but they have a much friendlier, syntax as they don't require dereferencing to read and write through referenced data.
	double *const const_p_double_value {&double_value}; // const pointer can not point to somewhere else
	const_p_double_value = & other_double_value; // Error