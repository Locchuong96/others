### Constructor & Destructir call order

Constructor

	Dog::Dog(std::string name_param, std::string breed_param,int age_param){
		dog_name = name_param;
		dog_breed = breed_param;
		dog_age = new int; // Memory allocated on the heep
		*dog_age = age_param;
		std::cout << "Dog constructor called for " << dog_name << std::endl;
	}

Destructor

	Dog::~Dog(){
		delete dog_age;
		std::cout << "Dog destructor called for " << dog_name << std::end;
	}

Assume the we have multiple instances of `Dog` class:

	Dog dog1("Doggy1","Shepherd",4);
	Dog dog1("Doggy2","Shepherd",2);
	Dog dog1("Doggy3","Shepherd",6);
	Dog dog1("Doggy4","Shepherd",3);

THe destructor will call by the revert order.