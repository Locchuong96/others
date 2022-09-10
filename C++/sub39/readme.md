### for loop

Pillars for any loop
- Iterator
- Starting Point
- Test (controls when the loop stops)
- Increment(Descrement)
- Loop body

example:

	for( unsigned_int i {}; i < 10; i++){
		std::cout << " I love C++ " << std::endl;
	}

`size_t`: Not a type, just a type alias for some `unsigned int` representation

	for( size_t i {}; i < 10; i++){
		std::cout << " I love C++ " << std::endl;
	}

You can do some operator inside the loop

		for( size_t i {0}; i < 10; i++){
		std::cout << "i :" << i << "Double that and you get " << 2*i << std::endl;
	}

interator variable can be use within the loop

	int main(int argc,char **argv){
		for (size_t i{0};i<10;++i){
			// i is valid to use withing the boundaries of the {} here
			std::cout << "i is usable here, the value is: " << i << std::endl;
		}
		// If you try to acess i here you will get the error.
		// I does not exist in the main function of local scope
		return 0;
	}

If you want the iterator can be use outside the for loop, declare it as a gobal variable

	size_t j{};
	for (j;j<10;++j){
		std::cout << "USing the j variable from main function local scope: " << j << std::endl;
	}
	std::cout << "Loop done, the value of j is : " << j << std::endl;

*Note* Hard coded values are bad

	const size_t COUNT {10};
	for (size_t j{}; j < COUNT ;i++){
		std::cout << "The value of j is: " << j << std::endl;
	}