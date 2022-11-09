### Size of class objects

The size of objects normally is sum of size variables. Not the function

	class Wrapper{
		public:
			void do_something(){}

			void print_info(){
				std::cout << "var1: " << m_var1 << std::endl;
				std::cout << "var2: " << m_var1 << std::endl;
				std::cout << "name: " << m_name << std::endl;
			}

		private:
			int m_var1{};
			int m_var2{};
			std::string m_name{"Some random text"};
	};

This part use to count for size

	private:
			int m_var1{};
			int m_var2{};
			std::string m_name{"Some random text"};

**Boundary alignment**

![cap](cap.png)