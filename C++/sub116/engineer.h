#ifndef ENGINEER_H
#define ENGINEER_H

#include "person.h"
#include "person.cpp"

class Engineer : public Person{
	friend std::ostream& operator<<(std::ostream& out, const Engineer& operand);
public:
	Engineer();
	
	Engineer(std::string_view fullname,int age,std::string_view address,int contract_count);
	
	Engineer(const Engineer& source);
	
	~Engineer();

	int get_contract_count() const{
		return contract_count;
	}

private:
	int contract_count{0};
};

#endif