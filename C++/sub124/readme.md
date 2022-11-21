### Overloading, overriding and function hiding

	class Shape{
	public:
		Shape() = default;
		
		Shape(std::string_view description);
		
		~Shape();
		virtual void draw() const{
			std::cout << "Shape::draw() called. Drawing " << m_description << std::endl;
		}
		
	protected:
		std::string m_description{""};
	};

Virtual method overloads:

	Shape shape1("Shape1");
	Oval oval1(2.0,3.5,"Oval1");
	Circle circle1(3.3,"Circle1");
	circle1.draw();
	circle1.draw(44); //Error

If you want avoid the error you have to comment out the virtual overide function

	// virtual void draw() const override{
	// 	std::cout << "Circle::draw() called.Drawing " << m_description <<
	// 	" with radius: " << get_x_rad() << std::endl;
	// }

When you overide the specific method (the one does not take params), the other will be hide and can not be use. When you overide a single overload of the virtual function all the other overload will be hidden and won't be use anymore in downstream overload.

Overloads introduced downstream

	class Oval: public Shape{
	public:
		Oval()=default;
		Oval(double x_radius,double y_radius, const std::string_view description);
		~Oval();
		virtual void draw() const override{
			std::cout << "Oval::draw() called.Drawing " << m_description <<
			"with m_x_radius: " << m_x_radius << "and m_y_radius: " << m_y_radius << std::endl;
		}
		virtual void draw(int color_depth,std::string color) const{
			std::cout << "Drawing with color depth: " << color_depth << "and color: " << color << std::endl;
		}
	private:
		double m_x_radius{0.0};
		double m_y_radius{0.0};
	};

Error will happen

	Shape shape1("Shape1");
	Oval oval1(2.0,3.5,"Oval1");
	Circle circle1(3.3,"Circle1");
	
	//Shape polymorphism with non top level polymorphic methods
	Shape* shape_ptr = &circle1;
	
	//shape_ptr->draw(44,"blue"); // Error: method not know to Shape
	
	//Slicing with non top level polymorphic methods
	Shape shape2 = circle1;
	shape2.draw(44,"blue"); //void draw (int color_depth,std::string color) method sliced
							// off along with the oval part of circle1