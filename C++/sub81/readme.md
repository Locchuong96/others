### Capture lists

Capture lists a llow you use the varible outside the lambda function Without the declare it as parameter, Example

	// Capture lists
	double a {10};
	double b {20};
	auto func = [a,b](){
		std::cout << "a + b: " << a + b << std::endl;
	};
	func();

Capturing by value, the value captured will not change when the value outside is change

	// Capturing by value: what we have in the lambda function is a copy

	int c{42};
	auto func = [c](){
		std::cout << "Inner value: " << c << std::endl;
	}

	for(size_t i{}; i <5;i++){
		std::cout << "Outer value: " << c << std::endl;
		func();
		++c;
	}

Capturing by reference: Working on the original outside value

	int c{42};

	auto func = [&c](){
		std::cout << "Inner value: " << c << std::endl;
	};

	for (size_t i{}; i <5; ++i){
		std::cout << "Outer value: " << c << std::endl;
		func();
		++c;
	}