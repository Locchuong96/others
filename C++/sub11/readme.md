### Input and Output

|stream|Purpose|
|---|---|
|std::cout|Printing data to the console(terminal)|
|std::cin|Reading data from the terminal|
|std::cerr|Printing errors to  the console|
|std::clog|Printing log messages to the consoles|
|std::endl|Endline|
|std::string|declare string type|
|std::getline|handle spaces input|

- cout: `std::cout << "Hello World!" << std::endl;`

- cerr: `std::cerr << "std::cerr output : Something went wrong" << std::endl;`

- clog: `std::clog << "std::clog output : This is a log message" << std::endl;`

- cin: `std::cin >> name;` or `std::cin >> age;`

		# include <iostream>
		int main(int argc,char **argv){
			int age;
			std::string name;
			std::cout << "Please enter your last name: " << std::endl; // send your string into cout and then send endline into cout
			std::cin >> name; // read the input from cin
			std::cout << "Please enter your age: " << std::endl;
			std::cin >> age;
			std::cout << "Hello" << name << " You are " << age << " Year olds" << std::endl;
		}

- wrap into 1 statement: `std::cin  >> name >> age;`

		#include <iostream>
		int main(int argc,char **argv){
			int age;
			std::string name;
			std::cout << "Please enter your Last name and age, seperated by spaces :" << std::endl;
			std::cin  >> name >> age;
			std::cout << "Hello " << name << " You are " << age << " Year olds" << std::endl;
		}

or typing twice:

		std::cout << "Please enter your name and your age (Press enter after finish your input)" << std::endl;
		std::cin >> name;
		std::cin >> age;

- handle spaces input `std::getline(std::cin,full_name); // get input have spaces`

		# include <iostream>
		int main(int argc,char **argv){
			int age;
			std::string full_name;
			std::cout << "Please enter your full name: " << std::endl;
			std::getline(std::cin,full_name); // get input have spaces
			std::cout << "Please enter your age: " << std::endl;
			std::cin >> age;
			std::cout << "Hello" << name << " You are " << age << " Year olds" << std::endl;
		}

break your statement into 2 lines

		std::cout << "Hello" << name << " You are " 
		<< age << " Year olds" << std::endl;