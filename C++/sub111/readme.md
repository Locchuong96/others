### Resurrecting members back in scope

You can resurrect members by `using`, it allow private derive class can access some member (BUT NOT the private thing)

	class Person; // Forward declaration
	class Engineer : private Person
	{
		friend std::ostream& operator<<(std::ostream& out, const Engineer& operand);
		public:
			Engineer();
			~Engineer();
		protected:
			using Person::get_full_name;
			using Person::get_age;
			using Person::get_address;
		public:
			using Person::m_full_name;
			//using Person::m_address; // Compiler error
			using Person::add_numbers; //Resurect back to public access
		protected:
		int contract_count{0};
	};