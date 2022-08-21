### Assignments

Assign new value after declare and initialize

Example1:

	int var1 {123}; // Declare and initialize
	std::cout << "var1 : " << var1 << std::endl;
	 var1 = 55; // Assign
	 std::cout << "var1: " << var1 << std::endl;

Example2:

	bool state {false};
	std::cout << std::boolalpha;
	std::cout << "state : " << state <<  std::endl;

	state = true; // Assign
	std::cout << "state : " << state << std::endl;

*Note* Be careful about auto assignment, compiler error
	
	auto var3 {333u}; // Declare and intialize with tyep deduction
	var3 = -33 // Assign negative number , DANGER!
	std::cout << "var3 : " << var3 << std::endl;