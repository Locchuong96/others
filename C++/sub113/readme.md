### Custom Constructors With Inheritance

Custom constructors:

		int main(){
			Person person1("John Snow",27,"Winterfell cold 22st#25");
			std::cout << "person1: " << person1 << std::endl;
			std::cout << "_______________________" << std::endl;
			Engineer eng1("Daniel Gray",41,"Green Sky Oh Blue 33st#34",12);
			std::cout << "engineer1: " << eng1 << std::endl;
			std::cout << "_______________________" << std::endl;
			CivilEngineer civil_eng1("John Travolta",45,"Tiny Dog 34st#44",31,"Road Strength");
			std::cout << "civil_engineer1: " << civil_eng1 << std::endl;
		    return 0;
		}

Solution (But not ideal):

	Engineer::Engineer(const std::string& fullname, int age, const std::string address, int contract_count){
		// Can not set the values in the body like this, because you have
		//  no access to private members from base class, No matter what.
		this -> m_full_name = fullname;
		this -> m_age = age;
		this -> m_address = address; //Error: m_address is private in this context
	}

Initializer lists: Doing it wrong, because the derived class. has not right to initialize the member of base class.

	Engineer::Engineer(const std::string& fullname, int age, const std::string address, int contract_count)
		: m_full_name(fullname), m_age(age), m_address(address), contract_count(contract_count){
		}

Initializer lists with doing right, which member belong to base-class `Person` we declare a instane of base-class and pass these param into it. The class declare member at the first time have declare

	Engineer::Engineer(const std::string& fullname,int age, const std::string address, int contract_count)
		: Person(fullname,age,address),contract_count(contract_count){
		}