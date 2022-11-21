# include <iostream>
# include "animal.h"
# include "animal.cpp"
# include "feline.h"
# include "feline.cpp"
# include "dog.h"
# include "dog.cpp"

int main(int argc,char** argv){

	Dog dog0("dark yellow","dog0");

	// The destructor are called in the order
	// Dog
	// Feline

	Animal *animal1 =  new Dog("dark yellow","dog1");
	delete animal1; //Only Animal destructor is called. BAD!
	
	return 0;
}