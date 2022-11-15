#ifndef ENGINEER_H
#define ENGINEER_H

#include "person.h"
#include "person.cpp"

class Engineer : public Person{
	using Person::Person; //Inheriting constructors
	friend std::ostream& operator<<(std::ostream& out,const Engineer& operand);
public:
	// Engineer();

	// Engineer(const Engineer& source);

	Engineer(std::string_view fullname, int age,std::string_view address, int contract_count);

	~Engineer();

	int get_contract_count() const{
		return contract_count;
	}

private:
	int contract_count{0};
};

#endif