#include "Dog.h"

Dog::Dog() : Animal()
{
	cout("Dog constructor called");
	type = "Dog";
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
	cout("Dog copy constructor called");
}

Dog& Dog::operator=(const Dog& copy)
{
	cout("Dog assignment operator called");
	type = copy.type;
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