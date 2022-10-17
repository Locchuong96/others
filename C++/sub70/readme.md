### Function Declaration and Definition

Separatin stuff: Sometimes it's more flexible to split the function into it's header and body and keep the code for each in different places

	// Function Declaration
	int max(int a, int b); // Function prototype
	int min(int a, int b); // Signature does not return type

Event:

	// Function Declaration
	int max(int , int ); // Function prototype
	int min(int , int ); // Signature does not return type

Example:

	// Function Declaration
	int max(int a, int b); // Function prototype
	int min(int a, int b); // Signature does not return type
	
	int main(int argc, char **argv){
		int a {10};
		int b {11};
		std::cout << "max(" << a << "," << b << ")" << max(a,b) << std::endl;
		std::cout << "min(" << a << "," << b << ")" << min(a,b) << std::endl;
		return 0;
	}

	// Function definition or implementation
	int max(int a, int b){
		if(a>b)
			return a;
		else
			return b;
	}

	int min(int a, int b){
		if(a<b)
			return a;
		else
			return b;
	}

Function protottype `int max(int a,int b);`: The prototype needs to come BEFORE the function call in your life. Otherwise the compliation will fail.

The full function definition coming in front of `main()` also doubles as a prototype(declaration).