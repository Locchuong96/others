# include <iostream>

class Cylinder{
	// Behaviors
	public:
		Cylinder(){
			base_radius = 2.0;
			height = 2.0;
		};
		Cylinder(double radius_param,double height_param){
			base_radius = radius_param;
			height = height_param;
		}
		double volume(){
			return PI * base_radius * base_radius * height;
		}
	//Properties
	private:
		double base_radius {1.0};
		double height {1.0};
		float PI {3.1415};
	};

int main(int argc, char ** argv){
	// Create a instance
	Cylinder cylinder1;
	Cylinder cylinder2(4.0,4.0);

	std::cout << "volume c1: " << cylinder1.volume() << std::endl;
	std::cout << "volume c2: " << cylinder2.volume() << std::endl;

	return 0;
}