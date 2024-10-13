#include "Dog.h"

Dog::Dog() : Animal()
{
	cout("Dog constructor called");
	type = "Dog";
	brain = new Brain();
}

Dog::Dog(const Dog& copy) : Animal()
{
	cout("Dog copy constructor called");
	brain = new Brain();
	*this = copy;
}

Dog& Dog::operator=(const Dog& copy)
{
	cout("Dog assignment operator called");
	type = copy.type;
	delete brain;
	brain = new Brain(*(copy.brain));
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
	cout("Dog destructor called");
	delete brain;
}