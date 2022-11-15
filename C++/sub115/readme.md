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