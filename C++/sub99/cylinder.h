#ifndef CYLINDER_H
#define CYLINDER_H

class Cylinder {
	private:
		double base_radius;
		double height;
	public:
		// constructors 
		Cylinder() = default;
		Cylinder(double base_param,double height_param); // Will be define detail in cylinder.cpp

		double volume();
		
		// Getters
		double get_base_radius();

		double get_height();
		
		// Setters
		void set_base_radius(double radius_param);

		void set_height(double height_param);
};

#endif