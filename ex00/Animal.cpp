#include "Animal.h"

Animal::Animal()
{
	type = "Animal";
	cout("Animal constructor called");
}

Animal::Animal(const Animal& copy)
{
	*this = copy;
	cout("Animal copy constructor called");
}

Animal& Animal::operator=(const Animal& copy)
{
	type = copy.type;
	cout("Animal assignment operator called");
	return *this;
}

void Animal::makeSound()
{
	cout("* animal sound *");
}

std::string& Animal::getType()
{
	return type;
}

Animal::~Animal()
{
	cout("Animal destructor called");
}