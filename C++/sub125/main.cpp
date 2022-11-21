#include<iostream>

#include "animal.h"
#include "animal.cpp"
#include "feline.h"
#include "feline.cpp"
#include "bird.h"
#include "bird.cpp"
#include "cat.h"
#include "cat.cpp"
#include "dog.h"
#include "dog.cpp"
#include "pigeon.h"
#include "pigeon.cpp"
#include "crow.h"
#include "crow.cpp"

int main(){
	
	Animal animal1("Animal is not humman");
	std::cout << animal1 << std::endl;

	Feline feline1("white tail","feline1");
	std::cout << feline1 << std::endl;

	Bird bird1("gray","bird1");
	std::cout << bird1 << std::endl;

	Cat cat1("Caro","cat1");
	std::cout << cat1 << std::endl;

	Dog dog1("Long hair","dog1");
	std::cout << dog1 << std::endl;

	Pigeon pigeon1("Red eyes","pigeon1");
	std::cout << pigeon1 << std::endl;

	Crow crow1("Black wing","crow1");
	std::cout << crow1 << std::endl;

	Animal* animals[]{&dog1,&cat1,&pigeon1,&crow1};

	for(const auto& animal: animals){
		animal->breathe();
	}
	std::cout << "-----" << std::endl;

	//Feline polymorphism

	Dog dog2("dark gray","dog2");
    Cat cat2("black stripes","cat2");
    Pigeon pigeon2("white","pigeon2");//Putting pigeon in felines will result in compiler error
                                        // pigeon is and Animal,a but is not a feline.

	Feline* felines[] {&dog2,&cat2};
	for(const auto& feline:felines){
		feline->run();
	}
	std::cout << "-----" << std::endl;

	//Bird polymorphism
	Pigeon pigeon3("white","pigeon1");
	Crow crow3("black","crow1");

	Bird* birds[] {&pigeon3,&crow3};

	for(const auto& bird:birds){
		bird->fly();
	}

	return 0;
}