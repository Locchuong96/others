### Inheriting base constructors

Using statement: Inherit the constructors

	class Engineer: public Person
	{
		using Person::Person; // Inheriting the constructor
		friend std::ostream& operator << (std::ostream& out, const Engineer& operand);
		public:
			Engineer(const Engineer& source);
			~Engineer();
		protected:
		int contract_count{9999}; // Default value
	}
	
- Copy constructors are not inherited. But you won't usually notice this as the compiler will insert an automatic copy constructor

- Inherited constructors are base constuctors. They have no knowledge of the derived class, Any member from the derived class will just contain junk or whatever default value it is intialized with

- Constructors are inherited with whatever access specifier they had in base class

- On top of derived constructors. you can add your own that possibly property initialize derived member variables.

- Inheriting constructors adds a level of confusion to your code. it is not clear which constructor is building your object. It is recommended to avoid them and only use this feature if no other option is available.
