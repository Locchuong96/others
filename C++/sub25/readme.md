### Prefix and Postfix + and -

Regular increasement and descrement

	int value {5};
	// Increasement by one
	value = value +1;
	std::cout << "The value is : " << value << std::endl;
	value = 5; //Reset value to 5
	// Decrement by one
	value = value -1;
	std::cout << "The value is : " << value << std::endl;

Postfix increasement/decrement (Only increase or decrease 1 unit), the value Will NOT change directly, but after you call the operator 

	int value = 5;
	// Inscrease with postfix
	std::cout << "The value is (incrementing) : " << value++ << std::endl; // 5
	std::cout << "The value is : " << value << std::endl; // 6
	std::cout << std::endl;
	// Decrement with postfix
	//Reset value to 5
	value = 5;
	std::cout << "The value is (decrementing) : " << value-- << std::endl; // 5
	std::cout << "The value is : " << value << std::endl; // 4

Prefix increasement/decreasement:

	int value = 5;
	// Increase
	++value;
	std::cout << "The value is (prefix++) : " << value << std::endl;
	// Reset
	value = 5;
	// Descrease
	--value;
	std::cout << "The value is (prefix--) : " << value << std::endl;

*Note*

- Only can increase or descrease by one
- There are no value** or **value also value// or //value
