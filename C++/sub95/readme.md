### Your first C++ class

Class is the mechanism allow your create your own type. Example builtin-type

	unsigned int age {44};
	double score {55.8};

Example, cylinder object with `r`: radius and `h`: height, and `A = pi * r^2` , `V = A * h`

Class declaration: syntax, `publish` define with thing inside the class can be accessable from the outside

	class Cylinder{
		// Variables
		public:
			double base_radius {1.0};
			double height {1.0};
			float PI {3.1415};
		// Functions
		public:
			double volume(){
				return PI * base_radius * base_radius * height;
			};
	};

Using clas instances (objects)

	int main(int argc, char ** argv){
		// Create a instance
		Cylinder cylinder1;
		std::cout << "volume c1: " << cylinder1.volume() << std::endl;
		// Modify atrribute inside instance
		cylinder1.base_radius = 3.0;
		cylinder1.height = 2;
		std::cout << "volume c1: " << cylinder1.volume() << std::endl;
		// Create another object
		Cylinder cylinder2;
		std::cout << "volume c2: " << cylinder2.volume() << std::endl;
		return 0;
	}

If the attribute are `private` it can not be use outside the class

	class Cylinder{
		// Variables
		public:
			double base_radius {1.0};
			double height {1.0};

		// Functions
		public:
			double volume(){
				return PI * base_radius * base_radius * height;
			};

		private:
			float PI {3.1415};
	};

- Class member variables can either be raw stack variables or pointers
- Members can not be references
- Classes have function (methods) that let time do things
- Class methods have accessto the member variables, regardless of whether are public or private
- Private members of classes (variables and functions) are not acessible from the outside of the class definition