#ifndef DOG_H
#define DOG_H

#include "feline.h"

class Dog : public Feline
{
public:

    Dog() = default;
    
    Dog(std::string_view fur_style, std::string_view description);
    
    virtual ~Dog();
    
    virtual void bark() const{
        std::cout << "Dog::bark called : Woof!" << std::endl;
    }

    //Stream insertable interface
    virtual void stream_insert(std::ostream& out) const override{
        out << "Dog [description: " << m_description <<  ", fur_style: " << m_fur_style << "]";
    }

private:
	double m_speed{};

};

#endif // DOG_H