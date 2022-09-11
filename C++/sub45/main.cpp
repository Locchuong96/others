#include <iostream>

int main(){
	// Declare array
	char message[6] {'H','e','l','l','o','\0'};

	//Print out the array through looping
	std::cout << "message : ";
	for(auto c: message){
		std::cout << c;
	}
	std::cout << std::endl;
    std::cout << "size : " << std::size(message) << std::endl;

    std::cout << "message: " << message << std::endl;
    
	// Can also modify elements of the char array
	std::cout << std::endl;
	std::cout << "Modify array data: " << std::endl;

	message[1] = 'a';

	//Print out the array
	std::cout << "message: ";
	for(auto c : message){
		std::cout << c;
	}
    std::cout << std::endl;

    std::cout << std::endl;
	std::cout << "Print array of character as a literal string without null termination" << std::endl;
    char message2[] {'H','e','l','l','o'}; // This is not a c string, as there is not null character
	std::cout << "message2: " << message2 << std::endl;
	std::cout << "size: " << std::size(message2) << std::endl; // Will probaly print some, garbage
    
    std::cout << std::endl;
	std::cout << "Print array of character as a literal string" << std::endl;
    char message3[] {'H','e','l','l','o','\0'}; 
	std::cout << "message3: " << message3 << std::endl;
	std::cout << "size: " << std::size(message3) << std::endl;

	std::cout << std::endl;
	std::cout << "Literal string as array" << std::endl;
	char message4[] {"Hello"}; // An implicit '\0' character is appended to the end of the string, 							// making it a c string
	std::cout << "message4 : " << message4 << std::endl;
	std::cout << "size : " << std::size(message4) << std::endl;
	std::cout << message4[0] << std::endl;
    
	// Can even have spaces beteen characters
	std::cout << std::endl;
	std::cout << "Space in iteral string" << std::endl;
	char message5[] {"Hello World"};
	std::cout << "message5: " << message5 << std::endl;
	std::cout << "size: " << std::size(message5) << std::endl;

	// Can't direct print arrays other than that of chars
	std::cout << std::endl;
	int numbers[] {1,2,3,4,5,6,7,8,9,0};
	std::cout << "numbers : " << numbers << std::endl;
    
    return 0;
}