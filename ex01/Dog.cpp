#include "Dog.h"

Dog::Dog() : Animal()
{
	type = "Dog";
	brain = new Brain();
	cout("Dog constructor called");
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
	brain = copy.brain;
	cout("Dog copy constructor called");
}

Dog& Dog::operator=(const Dog& copy)
{
	type = copy.type;
	*brain = *(copy.brain);
	cout("Dog assignment operator called");
	return *this;
}

void Dog::makeSound() const
{
	cout("Bark");
}

Dog::~Dog()
{
	delete brain;
	cout("Dog destructor called");
}