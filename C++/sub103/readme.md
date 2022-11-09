### The this pointer

Each class member function contains a hidden pointer called `this`. That pointer contains the address of the current object, for which the method is being executed. `this` also applies to constructors and destructors.

Printing out object addresses

	Dog::Dog(){
		dog_name = "None";
		dog_breed = "None";
		dog_age = new int; // Memory allocated on the heap
		*dog_age = 0;
		std::cout << "Dog: " << dog_name << "constructed at " << this << std::endl;
	}

	Dog::Dog(const std::string& name_param, const std::string& breed_param,int age_param){
		dog_name = name_param;
		dog_breed = breed_param;
		dog_age = new int; // Memory allocated on the heap
		*dog_age = age_param;
		std::cout << "Dog: " << dog_name << "constructed at" << this << std::endl;
	}

Conflicting names

	void set_name(const std::string& dog_name){
		//dog_name = dog_name; ?? Error
		this-> dog_name = dog_name;
	}

Chained calls using pointers

	Dog* p_dog1 = new Dog("Milou","Shepherd",3);
	p_dog1 -> print_info();
	std::cout << std::endl;
	std::cout << "after chained call: " << std::endl;
	// Pointer version
	p_dog1 -> set_name("Mario") -> set_dog_breed("Wire Fox Terrier")->set_dog_age(5);
	p_dog1 -> print_info();
	delete p_dog1;

Chained calls with pointers, when you return a pointer. You can continously call function next to it because the pointer represent for your obect.

	Dog* set_name(const std::string dog_name){
		this->dog_name = dog_name;
		return this;
	}
	Dog* set_dot_breed(const std::string breed){
		this -> dog_breed = breed;
		return this; // For use in chained calls
	}
	Dog* set_dog_age(int age){
		if(this -> dog_age){
			*(this -> dog_age) = age;
		}
		return this;
	}

	Dog* p_dog1 = new Dog("Milou","Shepherd",2);
	p_dog1 -> print_info();

	std::cout << std::endl;
	std::cout << "after chained call: " << std::endl;

	//Reference version
	p_dog1 -> set_name("Mario").set_dog_breed("Wire Fox Terrier").set_dog_age(5);
	p_dog1 -> print_info();
	delete p_dog1;

Chained calls using references

		Dog& set_dog_name(std::string_view dog_name){
			//dog_name = dog_name; //ERROR
			this -> dog_name = dog_name;
			return *this; //return pointer
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

`this` pointer allow the compiler  recognize exactly the member in class.

		dog1.set_dog_name("Pumba").set_dog_breed("Wire Fox Terrier").set_dog_age(5);
