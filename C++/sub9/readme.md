### Error and Warnings

The ultimate goal of cpp is `[writing code] -> [compiler] -> [execuatable binary file]`

There are 2 kinds of error and warning

- Compile Time Errors: example `std::cout "Hello world!" std::endl` without `;`

		main.cpp: In function ‘int main()’:
		main.cpp:5:2: error: expected ‘;’ before ‘return’
		return 0;
		^~~~~~


- Runtime errors

		main.cpp: In function ‘int main()’:
		main.cpp:7:3: warning: division by zero [-Wdiv-by-zero]
		7/0;
		~^~

- Warning