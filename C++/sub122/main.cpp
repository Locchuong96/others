# include <iostream>
# include "shape.h"
# include "oval.h"
# include "circle.h"
# include "shape.cpp"
# include "oval.cpp"
# include "circle.cpp"
# include <memory>

int main(int argc,char** argv){

	Circle circle1(7.2,"circle1");
	Circle circle2(11.2,"circle2");
	Circle circle3(12.2,"circle3");
	Oval oval1(13.3,1.2,"Oval1");
	Oval oval2(31.3,15.2,"Oval2");
	Oval oval3(53.3,9.2,"Oval3");

	// Shape shapes1[] = {circle1,circle2,circle3,oval1,oval2,oval3}; // Create an copy of object

	// for(Shape s: shapes1){
	// 	std::cout << "Inside array, sizeof(shape): " << sizeof(s) << std::endl;
	// 	s.draw();
	// 	Shape* shape_ptr = &s;
	// 	shape_ptr->draw();
	// 	std::cout << std::endl;
	// }

	// Shape* shapes3[] = {&circle1,&circle2,&circle3,&oval1,&oval2,&oval3};
	// for (Shape* shape_ptr:shapes3){
	// 	std::cout << "Inside array,sizeof(shape_ptr): " << sizeof(shape_ptr) << std::endl;
	// 	std::cout << "Inside array,sizeof(*shape_ptr): " << sizeof(*shape_ptr) << std::endl;
	// 	shape_ptr->draw();
	// 	std::cout << std::endl;
	// }

	std::shared_ptr<Shape> shapes4[] {std::make_shared<Circle>(12.2,"Circle4"),std::make_shared<Oval>(10.0,20.0,"Oval4")};
	for (auto& s: shapes4){
		s->draw();
	}

	return 0;
}