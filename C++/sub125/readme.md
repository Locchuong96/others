### Inheritance and Polymorphism at different levels

Animal Polymorphism

	//Animal polymophism
	std::cout << std::endl;
	std::cout << "Animal polymorphism" << std::endl;
	Dog dog1("dark gray","dog1");
	Cat cat1("black stripes","cat1");
	Pigeon pigeon1("white","pigeon1");
	Crow crow1("black","crow1");

	Animal* animals[] {&dog1,&cat1,&pigeon1,&crow1};

	for (const auto& animal : animals){
		animal -> breathe();
	}

Feline Polymorphism

	//Feline polymorphism
	std::cout << std::endl;
	std::cout << "Feline polymorphism" << std::endl;
	Dog dog2("dark gray","dog2");
	Cat cat2("black stripes","cat2");
	Pigeon pigeon2("white","pigeon2"); //Putting piegon in felines will result in compiler error
										// pigeon is an animal, a but is not a feline.

	Feline* felines[] {&dog2,&cat2};

	for (const auto& feline : felines){
		feline -> run();
	}

Bird Polymorphism

	//Bird polymorphism
	std::cout << std::endl;
	std::cout << "Bird polymorphism" << std::endl;
	Pigeon pigeon3("white","pigeon1");
	Crow crow3("black","crow1");

	Bird* birds[] {&piegon3,&crow3};

	for(const auto& bird: birds){
		bird->fly();
	}