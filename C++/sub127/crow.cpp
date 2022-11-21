#ifndef CROW_CPP
#define CROW_CPP

#include "crow.h"
	
Crow::Crow(std::string_view wing_color, std::string_view description):
	Bird(wing_color,description){}

Crow::~Crow(){}

#endif