# include <iostream>

int main(int argc,char** argv){

	class Cylinder{
	public:
		double base_radius {1.0};
		double height{1.0};
		const double PI {3.1415};
	public:
		//Constructors
		Cylinder() = default; 
		Cylinder(double radius_param,double height_param){
			base_radius = radius_param;
			height = height_param;
		}
		double volume(){
			return PI * base_radius * base_radius * height;
		}
	};

	// Stack object: notation
	Cylinder c1(10,2);
	std::cout << "volume 1: " << c1.volume() << std::endl;

	Cylinder* p_cylinder1 = &cylinder1;
	std::cout << "volume p_cylinder1: " << (*p_cylinder1).volume() << std::endl;
	std::cout << "volume p_cylinder1: " << *p_cylinder1 -> volume() << std::endl;

	// Heap object: dereference and notation
	Cylinder* c2 = new Cylinder(11,20);// Create object on heap
	std::cout << "volume c2: " << (*c2).volume() << std::endl;
	std::cout << "volume c2: " << c2 ->volume() << std::endl;

	delete c2; // Remember to release memory from help
	return 0;
}