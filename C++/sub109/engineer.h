#ifndef ENGINEER_H
#define ENGINEER_H

#include <iostream>
#include <string>
#include "person.h"
#include "person.cpp"

class Engineer : public Person{
	friend std::ostream& operator<<(std::ostream& out, const Engineer& engineer);
public:
	Engineer();
	Engineer(std::string_view major_param);
	~Engineer();

	void build_something(){
		m_full_name ="TIm Cook";
		// m_adress = "New York, The Grand, #8";
	}
private:
	std::string m_major{"None"};
};

#endif