### Don't call virtual(polymorphic) functions from constructors & destructors

Don't call virtual(polymorphic) functions from constructors & destructors because it will give you static binding result.

Base class:

	class Base{
	public:
		Base(){
			std::cout << "Base constructor called" << std::endl;
		}
		virtual ~Base(){
			std::cout << "Base destructor called" << std::endl;
		}
		virtual void setup(){
			std::cout << "Base::setup() called" << std::endl;
			m_value = 10;
		}
		virtual void clean_up(){
			std::cout << "Base::clean_up() called" << std::endl;
		}
		int get_value(){
			return m_value;
		}
	protected:
		int m_value;
	};

Derived class:

	class Derived : public Base{
	public:
		Derived():
		Base(){
			std::cout << "Derived constructor called" << std::endl;
		}

		virtual ~Derived(){
			std::cout << "Derived destructor called" << std::endl;
		}

		virtual void setup() override{
			std::cout << "Derived::setup() called" << std::endl;
			return m_value = 100;
		}

		virtual void clean_up() override{
			std::cout << "Derived::clean_up() called" << std::endl;
		}
	};

We are going to create a base pointer and use it to manage the derived object. `Base * b = new Derived;`

- Calling a virtual function from a constructor or destructor won't give you polymorphic results

- The call will never go to a more derived class than the currently executing constructor or destructor

- In other words you will get static binding results

Guideline

Never call virtual functions from constructor or destructors.

Call virtual functions on fully constructed objects

	Base * b = new Derived;
	b->setup();
	int n = b->get_value();
	std::cout << "Value is: " << n << std::endl;
	b->clean_up();
	delete b;