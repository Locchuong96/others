# include <iostream>
# include "shape.h"
# include "oval.h"
# include "circle.h"
# include "shape.cpp"
# include "oval.cpp"
# include "circle.cpp"

int main(int argc,char** argv){

	Shape shape1("Shape1");
	shape1.draw();

	Oval oval1(2.0,3.5,"Oval1");
	oval1.draw();

	Circle circle1(3.3,"Circle1");
	circle1.draw();
	
	return 0;
}