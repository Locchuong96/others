### Switch statement

`break;`: The break statement after each case is very important, It stops processing the switch block when successful case has been found. If the break statement is not there, all the cases following the current case will be executed.

`condition`: The condition inside the `switch(condition)` statement has accept the intgral types and enums: `int`,`long`,`usigned short`,etc. But not `string`. Example 

	#include <string>
	int main(){
		std::string name{"John"};
		switch (name){
		}
		return 0;
	}

You even can merge case like this:

	case Rectangle:{
			std::cout << "Active tool is Rectangle" << std::endl;
		}
		break;
	case Circle:{
		std::cout << "Active tool is Circle" << std::endl;
	}
	break;
	case Ellipse:{
		std::cout << "Active tool is Ellipse" << std::endl;
	}

become:

	case Rectangle:
	case Circle:
	case Ellipse:{
		std::cout << "Drawing shape" << std::endl;
	}