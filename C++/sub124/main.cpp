# include <iostream>
# include "shape.h"
# include "oval.h"
# include "circle.h"
# include "shape.cpp"
# include "oval.cpp"
# include "circle.cpp"
# include <memory>

int main(int argc,char** argv){

	Shape shape1("Shape1");
	Oval oval1(2.0,3.5,"Oval1");
	Circle circle1(3.3,"Circle1");
	
	circle1.draw();
	// circle1.draw(44);

	oval1.draw();
	// oval1.draw(55);

	// Shape* shape_ptr = new Circle(10,"Circle1");
	// shape_ptr->draw();

	return 0;
}