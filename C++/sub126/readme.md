### Inheritance and Polymorphism with static members

Base class with static variable

	class Shape{
	public:
		Shape();
		Shape(const std::string& description);
		~Shape();
		void draw() const{
			std::cout << "Shape::draw() called for: " << m_description << std::endl;
		}

		virtual int get_count() const{
			return m_count;
		}

		static int m_count;

	protected:
	std::string m_description;

	};

Derived class Static variable inherited will get `static` variable with out it own variable

	class Ellipse : public Shape{
	public:
		Ellipse();
		Ellipse(double x_radius,double y_radius,const std::string& description);
		~Ellipse();
	private:
		double m_x_radius;
		double m_y_radius;
	};

header file

	#ifndef ELLIPSE_H
	#define ELLIPSE_H

	#include "shape.h"
	#include "shape.cpp"

	class Ellipse : public Shape{
	public:
		Ellipse();

		Ellipse(double x_radius, double y_radius, std::string_view description);

		~Ellipse();

		virtual int get_count() const override {
			return m_count;
		}

		// static int m_count;

	private:
		double m_x_radius;
		double m_y_radius;

	};

	#endif

CPP file:

	#ifndef ELLIPSE_CPP
	#define ELLIPSE_CPP

	#include "ellipse.h"

	// int Ellipse::m_count{0};

	Ellipse::Ellipse(double x_radius,double y_radius,std::string_view description):
		Shape(description),m_x_radius(x_radius),m_y_radius(y_radius){
			++m_count;
		}

	Ellipse::Ellipse():Ellipse(0.0,0.0,"NoDescription"){

	}

	Ellipse::~Ellipse(){
		--m_count;
	}

	#endif

Shape and Ellipse count: similar

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

Ellipse maintains its own seperate static variable

	class Ellipse : public Shape{
	public:
		Ellipse();
		Ellipse(double x_radius, double y_radius, std::string_view description);
		~Ellipse();
		virtual int get_count() const override {
			return m_count;
		}
		static int m_count;
	private:
		double m_x_radius;
		double m_y_radius;
	};
	#endif

Polymorphic behavior

	// Polymorphic behavior
	{
		//Nested scope: using shared pointers so that object are destroyed automatically
		// without us directly callng delete
		std::shared_ptr<Shape> shapes[]{
			std::make_shared<Ellipse>(10,10,"ellipse_at_0"),
			std::make_shared<Ellipse>(12,43,"ellipse_at_1")
		};

		std::cout << "Shape count (Nested scope): " <<Shape::m_count << std::endl;
		std::cout << "Ellipse count (Nested scope): " << Ellipse::m_count << std::endl;
	}