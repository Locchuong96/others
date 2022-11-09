### Setters and Getters

This is a methods to read or modify member variables of a class. If you have the members in private place, you can get it by Setter and if you want to, If you want to modify members inside the private place you can use the Getter

	class Cylinder {
		private:
			double base_radius;
			double height;
			const double PI = 3.1415;
		public:
			// constructors
			Cylinder() = default;
			Cylinder(double base_param,double height_param){
				base_radius = base_param;
				height = height_param;
			}
			// Getters
			double get_base_radius(){
				return base_radius;
			}
			double get_height(){
				return height;
			}
			// Setters
			void set_base_radius(double radius_param){
				base_radius = radius_param;
			}
			void set_height(double height_param){
				height = height_param;
			}
	}