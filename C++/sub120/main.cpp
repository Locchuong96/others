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

	std::cout << std::endl;
	std::cout << "Polymirphism (dynamic binding) with References: " << std::endl;
	draw_shape(shape1);
	draw_shape(oval1);
	draw_shape(circle1);

	std::cout << std::endl;
	std::cout << "Polymirphism (dynamic binding) with Pointer: " << std::endl;
	draw_shape_through_ptr(&shape1);
	draw_shape_through_ptr(&oval1);
	draw_shape_through_ptr(&circle1);

	// You don't hace access to non virtual functions through polymorphism
	std::cout << std::endl;
	std::cout << "No access to non virtual functions throught polymorphism" << std::endl;
	Shape * shape_ptr = &oval1;
	shape_ptr->draw();

	std::cout << std::endl;
	std::cout << "Dynamic binding polymorphism" << std::endl;
	Shape* shape_collection[]{&shape1,&oval1,&circle1};

	for(Shape* s_ptr:shape_collection){
		s_ptr->draw();
	}

	return 0;
}