# include <iostream>

int main(int argc,char** argv){

	class Cylinder {
		private:
			double base_radius;
			double height;
			const double PI = 3.1415;
		public:
			// constructors
			Cylinder() = default;
			Cylinder(double base_param,double height_param){
				base_radius = base_param;
				height = height_param;
			}
			// Getters
			double get_base_radius(){
				return base_radius;
			}
			double get_height(){
				return height;
			}
			// Setters
			void set_base_radius(double radius_param){
				base_radius = radius_param;
			}
			void set_height(double height_param){
				height = height_param;
			}
			double volume(){
				return base_radius * base_radius * PI * height;
			}
	};

	double r {2};
	double h {3};

	Cylinder cylinder1;
	// Setters
	cylinder1.set_base_radius(r);
	cylinder1.set_height(h);
	// Getters
	std::cout << "base radius: " << cylinder1.get_base_radius() << std::endl;
	std::cout << "base radius: " << cylinder1.get_base_radius() << std::endl;

	std::cout << "volume: " << cylinder1.volume() << std::endl;
	return 0;
}