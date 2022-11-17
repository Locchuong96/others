# include <iostream>
# include "shape.h"
# include "oval.h"
# include "circle.h"
# include "shape.cpp"
# include "oval.cpp"
# include "circle.cpp"

void draw_circle(const Circle& circle){
		circle.draw();
	}

void draw_oval(const Oval& oval){
	oval.draw();
}

int main(int argc,char** argv){

	Shape shape1("Shape1");
	// shape1.draw();

	Oval oval1(2.0,3.5,"Oval1");
	// oval1.draw();

	Circle circle1(3.3,"Circle1");
	// circle1.draw();

	std::cout << std::endl;
	std::cout << "Calling methods through pointers : static binding" << std::endl;

	Shape* shape_ptr = &shape1;
	shape_ptr->draw();

	shape_ptr = &oval1;
	shape_ptr->draw();

	shape_ptr = &circle1;
	shape_ptr->draw();

	std::cout << std::endl;
	std::cout << "Calling methods through References : static binding" << std::endl;

	Shape& shape_ref = shape1;
	shape_ref.draw();
	
	Shape& shape_ref1 = oval1;
	shape_ref1.draw();
	
	Shape& shape_ref2 = circle1;
	shape_ref2.draw();

	std::cout << std::endl;
	std::cout << "Shapes stored in collection" << std::endl;
	Circle circle_collection[]{circle1,Circle(10.0,"Circle2"),Circle(20.0,"Circle3")};
	Oval oval_collection[]{oval1,Oval(22.3,51.1,"Oval2"),Oval(10.0,20.0,"Oval3")};

	for (const auto& c: circle_collection){
		c.draw();
	}

	for (const auto& o: oval_collection){
		o.draw();
	}

	std::cout << std::endl;
	std::cout << "Multi Shapes stored in collection" << std::endl;

	Shape shape4("shape4");
	Oval oval4(2.0,3.5,"Oval4");
	Circle circle4(3.3,"Circle4");
	Shape* shape_collection[]{&shape4,&oval4,&circle4};

	for (Shape* s_ptr: shape_collection){
		s_ptr->draw();
	}
	
	return 0;
}