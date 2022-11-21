#ifndef PIGEOH_CPP
#define PIGEOH_CPP

#include "pigeon.h"
	
Pigeon::Pigeon(std::string_view wing_color, std::string_view description):
	Bird(wing_color,description){}

Pigeon::~Pigeon(){}

#endif