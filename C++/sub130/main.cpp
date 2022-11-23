# include <iostream>
# include "animal.h"
# include "animal.cpp"
# include "feline.h"
# include "feline.cpp"
# include "dog.h"
# include "dog.cpp"

void do_something_with_animal_ptr(Animal* animal){
	std::cout << "In function taking base pointer..." << std::endl;
	Feline* feline_ptr = dynamic_cast<Feline*>(animal);
	if(feline_ptr){
		feline_ptr->do_some_feline_thingy();
	}
	else{
		std::cout << "Could not cast to Feline pointer,Sorry." << std::endl;
	}
}

void do_something_with_animal_ref(Animal& animal){
	std::cout << "In function taking base reference..." << std::endl;
	Feline* feline_ptr_1 {dynamic_cast<Feline*>(&animal)};
	if(feline_ptr_1){
		feline_ptr_1->do_some_feline_thingy();
	}
	else{
		std::cout << "Could not cast to Feline reference,Sorry." << std::endl;
	}
}

int main(int argc,char** argv){


	// Base class pointer Slicing class, do_some_feline_thingy
	Animal *animal1 =  new Feline("stripes","feline1");

	// animal1->do_some_feline_thingy();

	//If the cast succeeds, we get a valid pointer back,
	//If it fails, we get nullptr, So we can check before
	//calling stuff on the returned pointer

	// Feline* feline_ptr = dynamic_cast<Feline*>(animal1);
	// feline_ptr->do_some_feline_thingy();

	Dog* feline_ptr = dynamic_cast<Dog*>(animal1);

	if (feline_ptr){
		feline_ptr->do_some_feline_thingy();
	}
	else{
		std::cout << "Could not do the transformation from Animal* to Dog*" << std::endl;
	}

	//Can do the transformation downstream for references

	//Base class reference
	Feline feline2 ("stripes","feline2");
	Animal & animal_ref = feline2;

	//Calling no virtual methods on animal_ref will not work
	//animal_ref.do_some_feline_thingy();

	// Dog & feline_ref {dynamic_cast<Dog&>(animal_ref)};
	// feline_ref.do_some_feline_thingy();

	//Doing proper checks with references

	Dog* feline_ptr_1 {dynamic_cast<Dog*>(&animal_ref)};
	if(feline_ptr_1){
		feline_ptr_1->do_some_dog_thingy();
	}
	else{
		std::cout << "Could not cast to Dog reference,Sorry." << std::endl;
	}

	std::cout << "--------------" << std::endl;

	do_something_with_animal_ptr(animal1);
	do_something_with_animal_ref(animal_ref);

	delete animal1;

	// int data{45};
	// std::string data_str = dynamic_cast<std::string>(data);

	// int data_ptr = &data;
	// std::string data_str = dynamic_cast<std::string*>(data_ptr);

	std::cout << "Done!" << std::endl;

	return 0;
}