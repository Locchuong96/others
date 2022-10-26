### Overloading with diefferent parameters

- Example: 

		int max(int a,int b){
			return (a>b)? a:b;
		}
		//Can not overload the return type, Compiler error
		//double max(int a,int b){
		//	return (a>b)? a:b;
		//} 
		double max(double a,double b){
		return (a>b)? a:b;
		}
		std::string_view max(std::string_view a, std::string_view b){
			return (a>b)? a:b;
		}

Parameter differences

- Order
- Number
- Types

The compiler can recognize function via the return type also the type of parameter


	double max(int a,double b){
		std::cout << "inside (int a,double b)" <<std::endl;
		return (a>b) ? a:b;
	}

	double max(double a,int b){
		std::cout << "inside (double a,int b)" <<std::endl;
		return (a>b) ? a:b;
	}

or even the number of parameter


	double max(double a,int b){
		std::cout << "inside (double a,int b)" <<std::endl;
		return (a>b) ? a:b;
	}

	double max(double a,int b,int c){
		std::cout << "inside (double a,int b, int c)" <<std::endl;
		return (a>b) ? a:b;
	}