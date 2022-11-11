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