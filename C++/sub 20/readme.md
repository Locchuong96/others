### characters and text

character get value from `a-z` and `0-9`

	char character1 {'a'}
	char character2 {'b'}
	char character3 {'c'}
	std::cout << "size of char type: " << sizeof{char}; << std::endl;
	std::cout << "size of character1: " << sizeof{character1} << std::endl;

1 byte: 256 possible values each matched to some character, refer to `ASCCII` table. It is possible to assign a valid ASCII code to a char variable, and the corresponding character will be store in. You can choose to interpret the either as a character or regular integral value

	char value = 65; // ASCII character code for A
	std::cout << "value : " << value << std::endl;
	std::cout << "value(int) : " << static_cast<int>(value) << std::endl;