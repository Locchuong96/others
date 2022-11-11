#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

class Person{
	friend std::ostream& operator<<(std::ostream& out, const Person& person);
public:
	Person();
	Person(std::string full_name_param, int age_param,std::string adress_param);
	~Person();

	std::string get_full_name(){
		return m_full_name;
	};

	std::string get_adress() const {
		return m_adress;
	};

	int get_age(){
		return m_age;
	};

public:
	std::string m_full_name{"Mysterious Person"};

protected:
	int m_age {0};

private:
	std::string m_adress {"Heaven"};
};

#endif