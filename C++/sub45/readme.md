### Arrays of characters

- Declare array: `char message[5] {'H','e','l','l','o'};`

- Modify array: `message[1] = 'a';`

*Note* 
	- character `char` array are special and you can print it as a literal string, but `int`,`double`.
	- If a character array is null 

- Null termination

Null termination, in the end of your string `char message[] {"H","e","l","l","o"};`, C++ will add a null termination to inform that your string is over. If you print out the whole string like `std::cout << message << std::endl;` you will get see `o`. To avoid it, you need to declare an array with empty termination `\0`.

	char message[6] {"H","e","l","l","o","\0"}; 
	std::cout << "message : " << message << std::endl;

Or you can declare array with the empty slot for null character `char message[6] = {'H','e','l','l','o'`};

Example:

	char message3[] {'H','e','l','l','o'}; // This is not a c string, as there is not null character
	std::cout << "message3: " << message3 << std::endl;
	std::cout << "size: " << std::size(message3) << std::endl; // Will probaly print some, garbage 																//after our hello message

- literal C-strings

You can also define a literal c string

	std::cout << std::endl;
	std::cout << "literal string" << std::endl;
	char message4 [] {"Hello"}; // An implicit '\0' character is appended to the end of the string, 							// making it a c string
	std::cout << "message4 : " << message4 << std::endl;
	std::cout << "size : " << std::size(message4) << std::endl;
	std::cout << message4[0] << std::endl;
	
	// Can even have spaces beteen characters
	std::cout << std::endl;
	std::cout << "space in iteral string" << std::endl;
	char message5[] {"Hello World"};
	std::cout << "message5: " << message5 << std::endl;
	std::cout << "size: " << std::size(message5) << std::endl;