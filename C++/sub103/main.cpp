# include <iostream>
# include <string_view>

class Dog{
	public:
		Dog(); //Default constructor
		Dog(std::string_view name_param, std::string_view breed_param, int age_param);
		~Dog(); //Destructor declared

		void print_info(){
			std::cout << "Dog (" << this << "): [ " << dog_name << " breed: " << dog_breed << " age: " << *dog_age
			<< "]" << std::endl;
		}

		// Setters
		// void set_dog_name(std::string_view dog_name){
		// 	//dog_name = dog_name; //ERROR
		// 	this -> dog_name = dog_name;
		// }

		// void set_dog_breed(std::string_view dog_breed){
		// 	//dog_name = dog_name; //ERROR
		// 	this -> dog_breed = dog_breed;
		// }

		// void set_dog_age(int dog_age){
		// 	//dog_name = dog_name; //ERROR
		// 	// *(this -> dog_age) = dog_age;
		// 	*(this -> dog_age) = dog_age;
		// }

		// Set as pointer
		// Dog* set_dog_name(std::string_view dog_name){
		// 	//dog_name = dog_name; //ERROR
		// 	this -> dog_name = dog_name;
		// 	return this;
		// }

		// Dog* set_dog_breed(std::string_view dog_breed){
		// 	//dog_name = dog_name; //ERROR
		// 	this -> dog_breed = dog_breed;
		// 	return this;
		// }

		// Dog* set_dog_age(int dog_age){
		// 	//dog_name = dog_name; //ERROR
		// 	// *(this -> dog_age) = dog_age;
		// 	*(this -> dog_age) = dog_age;
		// 	return this;
		// }

		Dog& set_dog_name(std::string_view dog_name){
			//dog_name = dog_name; //ERROR
			this -> dog_name = dog_name;
			return *this;
		}

		Dog& set_dog_breed(std::string_view dog_breed){
			//dog_name = dog_name; //ERROR
			this -> dog_breed = dog_breed;
			return *this;
		}

		Dog& set_dog_age(int dog_age){
			//dog_name = dog_name; //ERROR
			// *(this -> dog_age) = dog_age;
			*(this -> dog_age) = dog_age;
			return *this;
		}

	private:
		std::string dog_name;
		std::string dog_breed;
		int * dog_age {nullptr};
};
Dog::Dog(){
	dog_name = "None";
	dog_breed = "None";
	dog_age = new int; // Memory allocated on the heap
	*dog_age = 0;
	std::cout << "Dog: " << dog_name << "constructed at " << this << std::endl;
}
Dog::Dog(const std::string_view name_param, const std::string_view breed_param,int age_param){
	dog_name = name_param;
	dog_breed = breed_param;
	dog_age = new int; // Memory allocated on the heap
	*dog_age = age_param;
	std::cout << "Dog: " << dog_name << "constructed at" << this << std::endl;
}
Dog::~Dog(){
	delete dog_age;
	std::cout <<"Dog destructor called for: " << dog_name << std::endl;
}

int main(int argc,char** argv){

	std::string_view name = "Snoop";
	std::string_view breed = "Shepherd";
	int age = 3;

	Dog dog1(name,breed,age); // Constructor
	dog1.print_info();
	
	// dog1.set_dog_name("Pumba");
	// dog1.set_dog_breed("Wire Fox Terrier");
	// dog1.set_dog_age(4);

	// dog1.set_dog_name("Pumba")->set_dog_breed("Wire Fox Terrier")->set_dog_age(5);

	dog1.set_dog_name("Pumba").set_dog_breed("Wire Fox Terrier").set_dog_age(5);

	dog1.print_info();

	std::cout << 'Done!' << std::endl;
	
	//Destructor
	
	return 0;
}