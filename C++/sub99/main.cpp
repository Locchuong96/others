# include <iostream>
# include "cylinder.cpp"
# include "constants.h"

int main(int argc,char** argv){

	double r {2};
	double h {3};

	Cylinder cylinder1;

	// Setters
	cylinder1.set_base_radius(r);
	cylinder1.set_height(h);
	
	// Getters
	std::cout << "base radius: " << cylinder1.get_base_radius() << std::endl;
	std::cout << "base radius: " << cylinder1.get_height() << std::endl;
	std::cout << "volume: " << cylinder1.volume() << std::endl;

	return 0;
}