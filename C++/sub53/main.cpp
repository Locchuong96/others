#include <iostream>
// Try to allocate a insanely huge array in one go
// Unhandled new failure: Crash

int main(int argc,char* argv){

	// Try to allocate a insanely huge array in one go
	// Unhandled new fairlure: Crash
	
	//int* lots_of_ints1 { new int[100000000000000000000000000000] }; // May give an error about exceeding array size.
	
	// Use a huge loop to try and exhaust the memory capabilities
	// of your system. When new fails, your program is going to forcefuly terminate
	
	// for (size_t i{};i<100000000000;++i){
	// 	int* lots_of_ints2 {new int[10000000]};
	// }

	// Handling the exception
	// Handle the problem in a way that make sense for your application.
	// For example if you were trying to allocate memory to store color information
	// for your application, and allocation fails, you could opt for showing some feedback message to the user,and rendering your app in black/white.
	for(int i{}; i <100000000000; ++i){
        try{
            int* lots_of_ints3 {new int[100000]};
            }
		catch(std::exception& ex){
			std::cout << "Cought exception ourselves: " << ex.what() << std::endl;
		}
	}
}