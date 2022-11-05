# include <iostream>

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

	std::cout << 'PI' << cylinder2.PI << std::endl;
	return 0;
}