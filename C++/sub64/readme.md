### C-string manipulation

https://en.cppreference.com/w/cpp/header/cstring

Length of the string `std::strlen`, Example

	// Find the length of the string
	const char message1 [] {"the sky is blue."};	
	// Array decays into pointer when we use const char*
	const char* message2 {"the sky is blue."};
	// strlen ignores null character
	std::cout << "strlen(message1): " << std::strlen(message1) << std::endl;
	// sizeof includes null character
	std::cout << "sizeof(message1): " << sizeof(message1) << std::endl;
	// strlen still work with decayed arrays
	std::cout << "strlen(message2): " << std::strlen(message2) << std::endl;
	// Print size of pointer
	std::cout << "sizeof(message2): " << sizeof(message2) << std::endl;


Comparing strings `std::strcmp`,Example:

	// std::strcmp - signature: int strcmp (const char *lhs, const char *rhs );
	// Returns negative value if lhs appears before rhs lexicographical order,
	// Zero if lhs and rhs compare equal.
	// and Positive if lhs appears after rhs lexicographical order.
	std::cout << std::endl;
	std::cout << "std::strcmp: " << std::endl;
	const char* string_data1 {"Alabama"};
	const char* string_data2 {"Blabama"};
	// Print out the comparison
	std::cout << "string_data1: " << string_data1 << std::endl;
	std::cout << "string_data2: " << string_data2 << std::endl;
    std::cout << "std::strcmp ( " << string_data1 << " , " << string_data2 << ") : " << std::strcmp(string_data1,string_data2) << std::endl;
	string_data1 = "Alabama";
	string_data2 = "Alabama";
	std::cout << "std::strcmp ( " << string_data1 << " , " << string_data2 << ") : " << std::strcmp(string_data1,string_data2) << std::endl;
	
Comparing strings n-letters `std::strncmp`, Example:
	
	//std::strncmp: int strncmp(const char * lhs, const char * rhs, std::size_t count );
	//Compares n characters in the strings
	//Returns: Negative value if lhs appears before rhs in lexicographical order.
	//Zero if lhs and rhs compare equal, or if cout is zero.
	//Positive value of lhs appears after rhs lexicographical order.
	//Print out the comparison
	size_t n {3};
	std::cout << std::endl;
	std::cout << "std::strncmp: " << std::endl;
	std::cout << "std::strcmp ( " << string_data1 << " , " << string_data2 << ") : " << std::strncmp(string_data1,string_data2,n) << std::endl;
	string_data1 = "aaaia";
	string_data2 = "aaance";
	std::cout << "std::strcmp ( " << string_data1 << " , " << string_data2 << ") : " << std::strncmp(string_data1,string_data2,n) << std::endl;

Search string `std::strchr(str,target)`, find first occurrence, then return from the where it found the target to the string

	// Find the first occurence of a character
	std::cout << std::endl;
	std::cout << "std::strchr: " << std::endl;
	// we use std::strchr to find all the characters one by one.
	const char *content {"Try not. Do, or dot not. There is no try."};
	const char target = 'T';
	const char * result = content;
	int iterations {};
	while( (result = std::strchr(result,target)) != nullptr ){
		std::cout << "Found: " << target << "starting at '" << result << "'\n";
	//Increment result, otherwise we will find target at the same location
	++result;
	++iterations; // Keep increase everytime
	}

Find the last occurrence `std::strrchr`

	// Find last occurence
	std::cout << std::endl;
	std::cout << "std::strrchr: " << std::endl;
	char input [] = "/home/user/hello.cpp";
	char * output = std::strrchr(input,'/');
	if(output)
	std::cout <<output+1 <<std::endl; // +1 because we want to start printing past the character found by std::strrchr