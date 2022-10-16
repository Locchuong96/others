### Declaring and using sts::string

Declaring library `#include <string>`

	std::string full_name; // empty string
	std::string planet {"Earth. Where the sky is blue."}; // Initialize with string literal
	std::string prefered_planet{planet}; // Initialize with other existing string
	std::string message {"Hello there",5}; // Initialize with part of a string literal, contain 'Hello'
	std::string weird_message(4,'e'); // Initialize with multiple copies of a char contains eeee
	std::string greeting{"Hello world!"};
	std::string saying_hello{greeting,6,5}; // Initialize with part of an existing std::string
											// starting at index 6, taking 5 characters, contain 'World'

	std::cout << "full_name: " << full_name << std::endl;
	std::cout << "planet: " << planet << std::endl;
	std::cout << "prefered_planet: " << prefered_planet << std::endl;
	std::cout << "message: " << message << std::endl;
	std::cout << "weird_message: " << weird_message << std::endl;
	std::cout << "greeting: " << greeting << std::endl;
	std::cout << "saying_hello: " << saying_hello << std::endl;

Changing `std::string` at runtime
	
	std::cout << "changing string at runtime" << std::endl;
	planet = "Earth. Where the sky is blue, the land is is green";
	std::cout << "planet: " << planet << std::endl;

Use a raw array, the array pointed by a const char pointer, when you assign it to be point to an other character array in the memory, and you waited the memories for the previous assignment.

	const char * planet1 {"Earth. Where the sky is blue."};
	std::cout << "planet1: " << planet1 << std::endl;
	planet1 = "Earth, Where the sky is blue and the land is green";
	std::cout << "planet1: " << planet1 << std::endl;