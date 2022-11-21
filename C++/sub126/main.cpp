# include <iostream>
#include "shape.h"
#include "shape.cpp"
#include "ellipse.h"
#include "ellipse.cpp"

int main(int argc,char** argv){

	//Shape
	Shape shape1("shape1");
	std::cout << "shape count: " << Shape::m_count << std::endl; //1
	
	Shape shape2("shape2");
	std::cout << "shape count: " << Shape::m_count << std::endl; //2
	
	Shape shape3;
	std::cout << "shape count: " << Shape::m_count << std::endl; //3

	std::cout << "******************************************" << std::endl;
	//Ellipse
	Ellipse ellipse(10,12,"ellipse1");
	std::cout << "shape count: " << Shape::m_count << std::endl; //4
	std::cout << "ellipse count: " << Ellipse::m_count << std::endl;//1

	Ellipse ellipse2(11,12,"ellipse2");
	std::cout << "shape count: " << Shape::m_count << std::endl; //5
	std::cout << "ellipse count: " << Ellipse::m_count << std::endl;//2

	Shape* shapes[]{&shape1,&ellipse2};

	for (auto&s:shapes){
		std::cout << "count: " << s->get_count();
	}

	return 0;
}