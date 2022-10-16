### C-string concatenation and copying

https://en.cppreference.com/w/cpp/header/cstring

joining strings `std::strcat`

Example1:

	//Concatenation
	std::cout << std::endl;
	std::cout << "std::strcat: " << std::endl;
	char dest[50] = "Hello ";
	char src[50] = "World!";
	std::strcat(dest,src);
	std::strcat(dest," Goodbye world!");
	std::cout << "dest: " << dest << std::endl;

Example2:

	//More concatenation
	std::cout << std::endl;
	std::cout << "More std::strcat: " << std::endl;
	char * dest1 = new char[30] {'F','i','r','e','l','o','r','d','\0'};
	char * source1 = new char[30] {',','T','h','e',' ','P','h','e','n','i','x',' ','K','i','n','g','!','\0'};
	std::cout << "std::strlen(dest1): " << std::strlen(dest1) << std::endl;
	std::cout << "std::strlen(source1): " << std::strlen(source1) << std::endl;
	std::cout << "Concatenating..." << std::endl;
	std::strcat(dest1,source1); // Concate source into dest
	std::cout << "std::strlen(dest1): " << std::strlen(dest1) << std::endl;
	std::cout << "dest1: " << dest1 << std::endl;

Copy strings `std::strcpy(char*dest, const char* src)`

	
	//std::strcpy - signature : char * strcpy(char * dest, const char * src);
	std::cout << std::endl;
	std::cout << "std::strcpy: " << std::endl;
	const char* source3  = "C++ is a multipurpose programming language.";
	// create a empty string array
	char *dest3 = new char[std::strlen(source3)+1]; // +1 for null character
													// Contains garbage data not initialized
	std::cout << "dest string (before copy): " << dest3 << std::endl;
	std::cout << "sizeof(dest3) (before copy): " << sizeof(dest3) << std::endl;
	std::strcpy(dest3,source);
	std::cout << "dest string (after copy): " << dest3 << std::endl;
	std::cout << "sizeof(dest3) (after copy): " << sizeof(dest3) << std::endl;
	std::cout << "std::strlen(dest3): " << std::strlen(dest3) << std::endl;
	std::cout << "dest3: " << dest3 << std::endl;

Copy n characters from the source and replace it into destination string

	//std::strncpy: Copy n characters from src to dest
	//signature: char *strncpy(char *dest,const char *src,std::size_t count);
	std::cout << std::endl;
	std::cout << "std::strncpy: " << std::endl;
	const char * source4  = "Hello ";
	char dest4[] = {'a','b','c','d','e','f','\0'}; // Have to put the terminating null char if we want to print
	std::cout << "dest4: " << dest4 << std::endl;
	std::cout << "Copying...";
	std::strncpy(dest4,source4,4);
	std::cout << "dest4: " << dest4 << std::endl;