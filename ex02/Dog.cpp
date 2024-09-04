#include "Dog.h"

Dog::Dog() : Animal()
{
	type = "Dog";
	brain = new Brain();
	cout("Dog constructor called");
}

Dog::Dog(const Dog& copy) : Animal()
{
	brain = new Brain();
	*this = copy;
	cout("Dog copy constructor called");
}

Dog& Dog::operator=(const Dog& copy)
{
	type = copy.type;
	delete brain;
	brain = new Brain(*(copy.brain));
	cout("Dog assignment operator called");
	return *this;
}

void Dog::makeSound() const
{
	cout("Bark");
}

Brain* Dog::getBrain() const
{
	return brain;
}

Dog::~Dog()
{
	delete brain;
	cout("Dog destructor called");
}