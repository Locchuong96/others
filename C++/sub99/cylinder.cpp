#ifndef CYLINDER_CPP
#define CYLINDER_CPP

#include "cylinder.h"
#include "constants.h"

// A definition of constructor Cylinder(double base_param,double height_param)
Cylinder::Cylinder(double base_param,double height_param){
			base_radius = base_param;
			height = height_param;
		}

double Cylinder::volume(){
	return base_radius * base_radius * PI * height;
}

double Cylinder::get_base_radius(){
	return base_radius;
}
double Cylinder::get_height(){
	return height;
}
// Setters
void Cylinder::set_base_radius(double radius_param){
	base_radius = radius_param;
}
void Cylinder::set_height(double height_param){
	height = height_param;
}

#endif