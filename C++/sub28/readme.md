### Logical Operators

|||
|---|---|
|AND| && |
|OR|| || |
|NOT| ! |

Example:

	#include <iostream>
	
	int main(){
	
	bool a {true};
	bool b {false};

	std::cout << std::boolalpha;
	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;

	// AND: Evaluates to true when all operands are true,
	// 		A single false operand will drag
	// 		the entire expression to evaluating false

	std::cout << std::endl;
	std::cout << " Basic AND operations " << std::endl;
	std::cout << "a && b : " << (a && b) << std::endl;
	std::cout << "a && a : " << (a && a) << std::endl;
	std::cout << "b && b : " << (b && b) << std::endl;
	std::cout << "a && b && a: " << (a && b && a) << std::endl;

	// OR: Evaluates to false when exist  an operand are false,
	// 		A single true operand will drag
	// 		the entire expression to evaluating true

	std::cout << std::endl;
	std::cout << " Basic || operations " << std::endl;
	std::cout << "a || b : " << (a || b) << std::endl;
	std::cout << "a || a : " << (a || a) << std::endl;
	std::cout << "b || b : " << (b || b) << std::endl;
	std::cout << "a || b || a: " << (a || b || a) << std::endl;

	// NOT: reverse the boolean value
	std::cout << std::endl;
	std::cout << "Basic ! opertions " << std::endl;
	std::cout << "! a : " << (!a) << std::endl;
	std::cout << "! b : " << (!b) << std::endl;

	// Combine logical opertors in expression

	std::cout << "!(a && b) || c : " << !(a && b) || c << std::endl;

	return 0;
}

Combine logical operators in expression `std::cout << "!(a && b) || c : " << !(a && b) || c << std::endl;`

