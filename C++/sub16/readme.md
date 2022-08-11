### Intergers


`int`:
- stores decimals
- typycally occupies 4 bytes or more in memory

- There are 3 ways you can initialize a integer:
	- braced initialization
	- Functional initialization
	- Assignment initialization

**Variable braced initialization**

variable name must be start with a letter a-z, `typename variable_name {initializer_value}`

	int elephant_count; // Variable may contain random garbage value, WARNING

	int lion_count{}// Initializes to zero

	int dog_count {10}; // Initializes to 10

	int cat_count {15}; // Initializes to 15

	// Can use expression as initializer

	int domesticated_animals {dog_count + cat_count};

// Won't compile, the expression in braces uses undeclared variables
int bad_initialization {doesnt_exist1 + doesnt_exist2};

// 2.9 is of type double with a wider rnage than int.ERROR OR WARNING
int narrowing_conversion {2.9};

**Functional variable initialization**

	int apple_count(5);

	int orange_count(10);

	int fruit_count ( apple_count + orange_count );

	int add_initialization ( doesnt_exist3 + doesnt_exist4 );

	// Information lost, less safe than braced initializers
	int narrowing_conversion_functional (2.9);

**Assigment initialization**

	int bike_count = 2; //

	int truck_count = 7;

	int vehicle_count = bike_count + truck_count;

	int narrowing_conversion_assigment = 2.9; (error double must be use)

**Check size of a type in memory** by `sizeof()`

	std::cout << "sizeof int: " << sizeof(int) << std::endl;
	std::cout << "sizeof myvar: " << sizeof(truck_count) << std::endl;