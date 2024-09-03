#include "Dog.h"

Dog::Dog() : Animal()
{
	type = "Dog";
	cout("Dog constructor called");
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
	cout("Dog copy constructor called");
}

Dog& Dog::operator=(const Dog& copy)
{
	type = copy.type;
	cout("Dog assignment operator called");
	return *this;
}

void Dog::makeSound() const
{
	cout("Bark");
}

Dog::~Dog()
{
	cout("Dog destructor called");
}