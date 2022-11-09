### Managing Class objects through pointers

	#include <iostream>
	#include "constants.h"
	#include "cylinder.h"

	int main(int argc, char **argv){
		// Stack object: notation
		Cylinder c1(10,2);
		std::cout << "volume 1: " << c1.volume() << std::endl;
		// Heap object: dereference and notation
		Cylinder* c2 = new Cylinder(11,20);// Create object on heap
		std::cout << "volume c2: " << (*c2).volume() << std::endl;
		std::cout << "volume c2: " << cv2 ->volume() << std::endl;

		delete c2; // Remember to release memory from help
		return 0;
	}

*Note* `c2 -> volume()` is pointer access operator

Managing a stack object throught pointers `Cylinder* p_cylinder1 = &cylinder1;` and call `p_cylinder1.volume()` will cause to error because `p_cylinder1` is a pointer not a a object so you can not call the function You have to reference to it `(*p_cylinder1).volume()` or `*p_cylinder1 -> volume()`