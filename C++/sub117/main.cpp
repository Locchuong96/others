# include <iostream>
# include "child.h"

int main(int argc,char** argv){

	Child child(33);

	child.print_var(); //Calls the method in Child

	child.Parent::print_var(); // Calls the method in Parent,
								// value in parent just contains junk or whatever
								// in class intialization we did

	std::cout << "-----------" << std::endl;

	child.show_values();
	
	return 0;
}