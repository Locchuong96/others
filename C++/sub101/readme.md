### Destructors

Special methods that are called when an object dies. They are needed when the object needs to release some dynamic memory, or for some other kind of clean up.

Example:

	class Dog{
		public:
			Dog(); //Default constructor
			Dog(std::string name_param, std::string breed_param, int age_param){
			}
			~Dog(); //Destructor declared
					// Can also declare and implement in here: syntax commented out below
			/*
			~Dog(){
				delete dog_age;
				std::cout << "Dog destructor called for "<< dog_name << std::endl;
			}
			*/
		private:
			std::string dog_name;
			std::string dog_breed;
			int * dog_age;
	};

**When are destructors called**

The destructors are called in weird place that may not be obvious

- When an object is passed by value to a function

		void some_other_func(Dog dog_param){
		}

- When a local object is returned from a function (for some compilers).

Other obvious cases are:

- When a local stack object goes out of scope (dies)

		void some_func(){
		Dog my_dog("Fluffy","Shehperd",2);
		}

- When a heap object is released with delete.

		void some_func_other(){
			// Create an object on the heap and a pointer pointing to it
			// When you call this function the destructor will not to be call until the heap memory is released
			Dog* p_dog = new Dog("Spicy","Shehperd",2);
		}