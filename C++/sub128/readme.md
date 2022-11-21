### Virtual functions with defualt arguments

If you define a function with default value params and redefine the value of them with the `virtual` function, the compiler will accept the values from `Base` class not `Derived` class.

Base class

	class Base{
	public:
		Base();
		~Base();
		virtual double add(double a = 5,double b = 5) const{
			std::cout << "Base::add() called" << std::endl;
			return (a + b +1);
		}
	};

Derived class

	class Derived : public Base{
	public:
		Derived();
		~Derived();
		virtual double add(double a = 10, double b = 10) const override{
			std::cout << "Derived::add() called" << std::endl;
		}
		return (a+b+2);
	};

- Default arguments are handled at compile time

- Virtual functions are called at run time with  polymorphism

- If you use default arguments with virtual functions, you might get weird(erroneous) results with polymorphism.

Polymorphism in action

	// Base ptr: Uses polymorphism
	Base * base_ptr1 = new Derived:
	double result = base_ptr1->add();
	std::cout << "Result (base ptr): " << result << std::endl; //12
	std::cout << "-------------------" << std::endl;
	//Base ref: Uses Polymorphism
	Derived derived1;
	Base& base_ref1 = derived1;
	result = base_ref1.add();
	std::cout << "Result (base ref): " << result << std::endl;

Static binding

	//Direct object : Uses static binding
	Derived derived2;
	result = derived2.add();
	std::cout << "Result (Direct object): " << result << std::endl; //22
	std::cout << "----------------------" << std::endl;

Slicing & static binding

	//Raw objects -slicingL uses static bindinf
	Derived derived2;
	Base base1 = derived2;
	result = base1.add();
	std::cout << "Result (Raw objects assignment): " << result << std::endl;//11

Default arguments with virtual function can be very confusing, they are best avoided