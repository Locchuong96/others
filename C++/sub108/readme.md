### Protected members

command to build main.cpp file: `g++ -o main.exe -std=c++17 main.cpp`

You can change the `private` class to `protect`. the members inside protected can be accessable, reuseable and modify from derive class but not from the outside as main, Example:

	#ifndef PERSON_H
	#define PERSON_H
	#include <iostream>
	#include <string>
	class Person{
		friend std::ostream& operator<<(std::ostream& out, const Person& person);
	public:
		Person();
		Person(std::string first_name_param, std::string last_name_param);
		~Person();
	private:
		std::string first_name{"Mysterious"};
		std::string last_name{"Person"};
	};
	#endif

To:

	#ifndef PERSON_H
	#define PERSON_H
	#include <iostream>
	#include <string>
	class Person{
		friend std::ostream& operator<<(std::ostream& out, const Person& person);
	public:
		Person();
		Person(std::string first_name_param, std::string last_name_param);
		~Person();
	protected:
		std::string first_name{"Mysterious"};
		std::string last_name{"Person"};
	};
	#endif