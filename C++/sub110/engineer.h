# ifndef ENGINEER_H
# define ENGINEER_H

# include <string>
# include <string_view>
# include "person.h"
# include "person.cpp"

// Engineer is doing private inheritance

class Engineer : private Person
{
	friend std::ostream& operator<<(std::ostream& out, const Engineer& operand);
	public:
		Engineer();
		~Engineer();
		void build_something(){
			m_full_name = "John Snow";
			m_age = 23;
			// m_address = "424-345-563"; Compiler error NOT ACCESSABLE
		}
		int get_contract_count() const{
			return contract_count;
		}

	private:
		int contract_count{0};
};

# endif