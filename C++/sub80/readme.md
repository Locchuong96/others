### Declaring and using lambda functions

Lambda function is a machnism to set up anonymous function (without names). Once we have them set up, we can either give them names and call them, or we can even get them to do things directly without give it a name.
Lambda function signature:

	[capture list] (parameters) -> return type{
				// Function body
	}

Example:
		
		// Declare a lambda function	
		auto func = [](){std::cout << "Hello world!" << std::endl;};
		// Use it
		func();

Or you can use the function directly after definition by add `()` after `}`

		[](){std::cout << "Hello world!" << std::endl;}();

Lambda function returns something

		auto result = [](double a, double b){return (a+b);}(12.1,5.7);
		std::cout << "result: " << result << std::endl;

Or wrap it in the std::cout

	std::cout << "result: " << [](double a, double b){return (a+b);}(12.1,5.7); << std::endl;

Specify return type explicitly

	auto result = [](double a, double b) -> double{return (a+b);}(12.1,5.7);
	std::cout << "result: " << result << std::endl;

Or

	auto result = [](double a, double b) -> int{return (a+b);}(12.1,5.7);
	std::cout << "result: " << result << std::endl;