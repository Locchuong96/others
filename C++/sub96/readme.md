### C++ constructors

A special kind of method that is called when an instance of a class is created.
- No return type
- Same name as the class
- Can have parameters, can also have an empty parameter list
- Usually used to initialize member variables of a class

Class constructors:

	class Cylinder{
	// Behaviors
	public:
		Cylinder(){
			base_radius = 2.0;
			height = 2.0;
		};
		Cylinder(double radius_param,double height_param){
			base_radius = radius_param;
			height = height_param;
		}
		double volume(){
			return PI * base_radius * base_radius * height;
		}
	//Properties
	private:
		double base_radius {1.0};
		double height {1.0};
		float PI {3.1415};
	};


- Constructor with no param 

		Cylinder cylinder1;

		Cylinder(){
			base_radius = 2.0;
			height = 2.0;
		};

Constructor with param

		Cylinder cylinder1(4.0,4.0);
		Cylinder(double radius_param,double height_param){
			base_radius = radius_param;
			height = height_param;
		}

Set default constructor

	class Cylinder{
		public:
			double base_radius{1.0};
			double height {1.0};
		public:
			// Constructors
			Cylinder() = default;
			Cylinder(double radius_param,double height_param){
				base_radius = radius_param;
				height = height_param;
			}
			double volume(){
				return PI * base_radius * base_radius * height;
			}
		private:
		float PI {3.1415};
	};