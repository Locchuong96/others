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
}

Dog::~Dog(){
	delete dog_age; // Release the memory
	std::cout << "Dog destructor called for " << dog_name << std::endl;
}

void some_func(){
	Dog my_dog("Fluffy","Shehperd",2);
}

void some_other_func(Dog dog_param){
	// May lead to delete a pointer twice
}

void some_func_other(){
	// Create an object on the heap and a pointer pointing to it
	// When you call this function the destructor will not to be call until the heap memory is released
	Dog* p_dog = new Dog("Spicy","Shehperd",2);
}

int main(int argc,char** argv){

	// Dog my_dog("Fluffy","Shehperd",2);

	// some_other_func(my_dog);

	// some_func();

	// Dog mydog("Fluffy","Shepherd",2);

	some_func_other();

	std::cout << "Done!" << std::endl;

	return 0;
}