### Functions across Multiple Files: Compilation model revisited

One file program

	#include <iostream>
	int add_numbers(int a, int b){
		return a + b;
	}
	int main(){

		int a = 10;
		int b = 5;
		int c;

		std::cout << "Statement1" << std::endl;
		std::cout << "Statement2" << std::endl;
		c = add_numbers(a,b);
		std::cout << "Statement3" << std::endl;
		std::cout << "Statement4" << std::endl;
		return 0;
	}

The compiler:

- Preprocessing
- Compilation
- Linking

`[many sources] preprocessing [translation units] compilation [many objects] linking [one single executable file]`

[multi-file](./multi-file.png)

**ODR:** One Definition Rule: The same function implementation can not show up in the global namespace more than once.

The definition can be any where in your code. The linker searches for definitions in all translation units (.cpp)
files in the project. Does not have to live in a `.cpp` file with the same name as the header.
