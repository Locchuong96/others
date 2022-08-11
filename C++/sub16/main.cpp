#include <iostream>

int main(){

	// Braced initializers
	int elephant_count;
	int lion_count{};
	int dog_count {10};
	int cat_count {15};
	// Can use expression as initializer
	int domesticated_animals {dog_count + cat_count};

	// std::cout << "Eleplant count: " << elephant_count << std::endl;
	// std::cout << "Lion count: " << lion_count << std::endl;
	// std::cout << "Dog count: " << dog_count << std::endl;
	// std::cout << "Cat count: " << cat_count << std::endl;
	// std::cout << "Domesticated animal count: " << domesticated_animals << std::endl;

	// Functional initializers
	int apple_count(5);
	int orange_count(10);
	int fruit_count (apple_count + orange_count);
	int narrowing_conversion_functional (2.9); // Information lost, less safe than braced initializers

	// std::cout << "Apple count " << apple_count <<std::endl;
	// std::cout << "Orange count " << orange_count <<std::endl;
	// std::cout << "fruit count " << apple_count <<std::endl;
	// std::cout << "Narrowing conversion functional " << narrowing_conversion_functional <<std::endl;

	// Assigment initialization 

	int bike_count = 2; //
	int truck_count = 7;
	int vehicle_count = bike_count + truck_count;
	int narrowing_conversion_assigment = 2.9; //(error double must be use)

	std::cout << "Bike count " << bike_count <<std::endl;
	std::cout << "Truck count " << truck_count <<std::endl;
	std::cout << "Vehicle count " << vehicle_count <<std::endl;
	std::cout << "Narrowing conversion functional " << narrowing_conversion_functional <<std::endl;

	return 0;


}