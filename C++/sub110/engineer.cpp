# ifndef ENGINEER_CPP
# define ENGINEER_CPP

# include <string>
# include <string_view>
# include "engineer.h"

std::ostream& operator<<(std::ostream& out, const Engineer& operand){
	out << "Engineer [Full name: " << operand.get_full_name()
		<< ",age: " << operand.get_age()
		<< ",address: " << operand.get_address()
		<< ",contract_count: " << operand.contract_count << "]";
	return out;
}

Engineer::~Engineer(){}

Engineer::Engineer(){}

# endif