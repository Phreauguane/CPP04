#include "Animal.h"

Animal::Animal()
{
	cout("Animal constructor called");
	type = "Animal";
}

Animal::Animal(const Animal& copy)
{
	cout("Animal copy constructor called");
	*this = copy;
}

Animal& Animal::operator=(const Animal& copy)
{
	cout("Animal assignment operator called");
	type = copy.type;
	return *this;
}

void Animal::makeSound() const
{
	cout("* animal sound *");
}

std::string Animal::getType() const
{
	return type;
}

Animal::~Animal()
{
	cout("Animal destructor called");
}