# include <iostream>
# include "shape.h"
# include "oval.h"
# include "circle.h"
# include "shape.cpp"
# include "oval.cpp"
# include "circle.cpp"

void draw_shape(Shape& s_r){
	s_r.draw();
}

void draw_shape_through_ptr(Shape* s_p){
	s_p->draw();
}

int main(int argc,char** argv){

	Shape shape1("Shape1");
	Oval oval1(2.0,3.5,"Oval1");
	Circle circle1(3.3,"Circle1");

	//Comparing object sizes
	std::cout << "sizeof(Shape): " << sizeof(Shape) << std::endl; // dynamic 40- static 32
	std::cout << "sizeof(Oval): " << sizeof(Oval) << std::endl; // dynamic 56 - static 48
	std::cout << "sizeof(Circle): " << sizeof(Circle) << std::endl; // dynamic 56 - static 48

	//Sicling
	Circle circle2(3.3,"Circle1");

	Shape shape = circle1; //Only retain shape class

	shape.draw();

	return 0;
}