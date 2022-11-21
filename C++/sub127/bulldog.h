#ifndef BULL_DOG_H
#define BULL_DOG_H

#include "dog.h"

class BullDog : public Dog{
public:
	BullDog();
	virtual ~BullDog();
	// WIll throw a compiler error
	/*
	virtual void run() const overide{
	std::cout << "Bulldog::run() called" << std::endl;
	}
 	*/
};

#endif