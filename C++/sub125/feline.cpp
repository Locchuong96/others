#ifndef FELINE_CPP
#define FELINE_CPP

#include "feline.h"

Feline::Feline(std::string_view fur_style, std::string_view description)
    : Animal(description) , m_fur_style(fur_style)
{
}

Feline::~Feline()
{
}

#endif