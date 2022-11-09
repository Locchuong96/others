### Defaulted constructor

When you define a constuctor taking parameter, the compiler will take it as default and you can not create a instance without param `Cylinder cylinder1`. Example:

	class Cylinder{
		public:
			double base_radius {1.0};
			double height{1.0};
			const double PI {3.1415};
		public:
			//Constructors
			Cylinder() = default; // default constructor
			Cylinder(double radius_param,double height_param){
				base_radius = radius_param;
				height = height_param;
			}
			double volume(){
				return PI * base_radius * base_radius * height;
			}
	};


*Note* `Cylinder() = default` == `Cylinder(){}` and this declaration need to public to call