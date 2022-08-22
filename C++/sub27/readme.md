### Relational Operators: Comparing stuff

`<` , `<=`, `>`, `>=`, `==`, `!=`

Example:

	 std::cout << "number1 < number2 : " << (number1 < number2) << std::endl;
	 std::cout << "number1 <= number2 : " << (number1 <= number2) << std::endl;
	 std::cout << "number1 > number2 : " << (number1 > number2) << std::endl;
	 std::cout << "number1 >= number2 : " << (number1 >= number2) << std::endl;
	 std::cout << "number1 == number2 : " << (number1 == number2) << std::endl;
	 std::cout << "number1 != number2 : " << (number1 != number2) << std::endl;

*Note*

`std::cout << std::boolalpha;` enable true/false
`std::cout << std::noboolalpha` enable 1/0

`<<` is more piority than relational operators

store the result of relational operator `bool result = (number1 == number2);`