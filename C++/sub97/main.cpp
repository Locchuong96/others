# include <iostream>

int main(int argc,char** argv){

	class Cylinder{
	public:
		double base_radius {1.0};
		double height{1.0};
		const double PI {3.1415};
	public:
		//Constructors
		Cylinder() = default; // default constructor

		Cylinder(double radius_param,double height_param){
			base_radius = radius_param;
			height = height_param;
		}
		double volume(){
			return PI * base_radius * base_radius * height;
		}
	};

	Cylinder cylinder1;

	cylinder1.base_radius = 2;
	cylinder1.height = 3;

	std::cout << "cylinder volume: " << cylinder1.volume() << std::endl;

	return 0;
}
