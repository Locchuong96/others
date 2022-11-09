# include <iostream>
# include <string_view>

class Dog{
	public:
		Dog(); //Default constructor
		Dog(std::string name_param, std::string breed_param, int age_param);
		~Dog(); //Destructor declared
	private:
		std::string dog_name;
		std::string dog_breed;
		int * dog_age {nullptr};
};

// Dynamic memory allocation
Dog::Dog(){
	dog_name ="None";
	dog_breed = "None";
	dog_age = new int;
	*dog_age = 0;
}

Dog::Dog(std::string name_param, std::string breed_param, int age_param){
	dog_name = name_param;
	dog_breed = breed_param;
	dog_age = new int; // Memory allocated on the heap
	*dog_age = age_param;
	std::cout << "Dog destructor called for " << dog_name << std::endl;
}

Dog::~Dog(){
	delete dog_age; // Release the memory
	std::cout << "Dog destructor called for " << dog_name << std::endl;
}

int main(int argc,char** argv){

	Dog dog1("Doggy1","Shepherd",4);
	Dog dog2("Doggy2","Shepherd",2);
	Dog dog3("Doggy3","Shepherd",6);
	Dog dog4("Doggy4","Shepherd",3);

	std::cout << "Done!" << std::endl;

	return 0;
}