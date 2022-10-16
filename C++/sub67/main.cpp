#include <iostream>
#include <string>

int main(int argc,char* argv){

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

	return 0;
}