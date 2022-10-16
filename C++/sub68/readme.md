### One Definition rule

Definitions can not show up more than once in entire program, or translation units.

One definition rule: context

- Free standing variables
- Functions
- Classes
- Class member functions
- Class static member variables

- Free standing variables

		double weight {};

- Functions

		# include <iostream>
		double add(double a,double b);

		int main(){
			double result = add(10,20);
			std::cout << "result: " << result << std::endl;
			return 0;
		}

		double add(double a,double b){
			return a +b;
		}

		// Error if you define a function twice
		//double add(double a,double b){
		//	return a +b;
		//}

- Classes (You can have multi definition class in multi file but not the same cpp file)

		# include <iostream>
		struct Point{
			double m_x {};
			double m_y {};
		};
		int main(){
			Point p1:
			std::cout << "p1.x: " << p1.m_x << " ,p1.y: " << p1.m_y << std::endl;
			return 0;
		}

		
- Class member functions

- Class static member variables


		#include <iostream>
		#include "person.h"

		// Variable: Declaration and defination
		double weight {};

		double add(double a, double b);

		struct Point{
			double m_x{};
			double m_y{};
		};

		int Person::person_count = 8;

		// use Person class from Person Person::Person
		Person::Person(const std::string& names_param,int age_param)
			: full_name{names_param}, age{age_param}{
				++person_count;
			}
		int main(){

			Person p1("John Snow",35);

			p1.print_info();

			return 0;
		}