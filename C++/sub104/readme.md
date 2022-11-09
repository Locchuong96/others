### Struct

struct vs class

	// Members private by default
	class Dog{
		std::string name{"None"};
	};

	//Members public by default
	struct Cat{
		std::string name;
	}

Override defaults

	//Member private by default
	class Dog{
		public:
			std::string name{"None"};
	};

	//Member public by default
	struct Cat{
		public:
			Cat(const std::string*& cat_name){
				name = cat_name;
			}
		private:
			std::string name;
	};

Common use for struct, 2 2d point can access by publis

	struct Point{
		double x;
		double y;
	};