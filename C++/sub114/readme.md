### Copy Constructors With Inheritance

Create an instance by copy in instance

	int main(){
		Engineer eng1("Daniel Gray",41,"Green Sky Oh Blue 33St#75",12);
		std::cout << "eng1: " << eng1 << std::endl;
		std::cout << "_________________________________" << std::endl;
		Engineer eng2(eng1); // Copy constructor
		std::cout << "eng2: " << eng2 << std::endl;
	    return 0;
	}

Copy constructor person

	Person::Person(const Person& source)
	: m_full_name{source.m_full_name}, m_age{source.m_age}, m_address{source.m_address}{
		std::cout << "PERSON copy constructor called,,," << std::endl;
	}

Default arg constructor for base called, this is bad implementation because lost base class member

	Engineer::Engineer(const Engineer& source)
		: contract_count{source.contract_count}
	{
		std::cout << "Engineer copy constructor called,,," << std::endl;
	}

Other way is create a temporary copy object contain the same data in derived class object, this is not a good solution.

	Engineer::Engineer(const Engineer& source)
		:Person(source.m_full_name,source.m_age,source.m_address),
			contract_count{source.contract_count}
	{
		std::cout << "Engineer copy constructor called,,," << std::endl;
	}

- Not reusing the copy constructor we have in Person
- m_address is private to Person, can not be directly accessed from Engineer object
- We could set up a public method to return the address buy that could go against, you design guidelines.

Proper copy constructor, this implementation let the compiler we are using Engineer object to intialize the person object.

	Engineer::Engineer(const Engineer& source)
		: Person(source),
			contract_count{source.contract_count}
	{
		std::cout << "Engineer copy constructro"
	}

*Brief*

Base model header file

	Person::Person(const Person& source)
	: m_full_name(source.m_full_name),m_age(source.m_age),m_address(source.m_address){
		std::cout << "Custom copy constructor for Person called,,," << std::endl;
	}

Base model cpp file

	Person::Person(const Person& source)
	: m_full_name(source.m_full_name),m_age(source.m_age),m_address(source.m_address){
		std::cout << "Custom copy constructor for Person called,,," << std::endl;
	}

Derived model header file

	Engineer(const Engineer& source);

Derived model cpp file

	Engineer::Engineer(const Engineer& source)
	: Person(source),
	contract_count(source.contract_count){
		std::cout << "PERSON-ENGINEER constructor called,,," <<std::endl;
	}