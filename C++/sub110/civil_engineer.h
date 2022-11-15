# ifndef CIVIL_ENGINEER_H
# define CIVIL_ENGINEER_H

# include <string>
# include <string_view>
# include "engineer.h"
# include "engineer.cpp"

class CivilEngineer : public Engineer{
		friend std::ostream& operator<<(std::ostream&, const CivilEngineer& operand);
	public:
		CivilEngineer();
		~CivilEngineer();
		void build_road(){
			// get_full_name(); // NOT ACCESSABLE
			// m_full_name = "Daniel Gray"; // NOT ACCESSABLE
			// m_age = 45;// NOT ACCESSABLE
		}
	private:
		std::string m_speciality("None");
	};

# endif