#include <iostream>
#include <cstring>

int main(int argc,char* argv){

	//Concatenation
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
	return 0;
}