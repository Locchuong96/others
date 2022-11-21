#ifndef CROW_H
#define CROW_H

#include "bird.h"
#include "bird.cpp"

class Crow : public Bird {
public:

	Crow() = default;
	
	Crow(std::string_view wing_color, std::string_view description);
	
	~Crow();

	virtual void cow() const{
		std::cout << "Crow::cow called for crow: " << m_description << std::endl;
	}

	virtual void breathe() const{
		std::cout << "Crow::breathe called for: " << m_description << std::endl;
	}

	virtual void fly() const override{
		std::cout << "Crow::fly() called for bird: " << m_description << std::endl;
	}
};

#endif