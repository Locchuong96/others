# include <iostream>
# include <cstring>

int main(int argc,char*argv){

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
    
    return 0;
}