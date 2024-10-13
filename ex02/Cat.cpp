#include "Cat.h"

Cat::Cat() : Animal()
{
	cout("Cat constructor called");
	type = "Cat";
	brain = new Brain();
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
	cout("Cat copy constructor called");
	brain = new Brain();
	*this = copy;
}

Cat& Cat::operator=(const Cat& copy)
{
	cout("Cat assignment operator called");
	type = copy.type;
	delete brain;
	brain = new Brain(*(copy.brain));
	return *this;
}

void Cat::makeSound() const
{
	cout("Meow");
}

Brain* Cat::getBrain() const
{
	return brain;
}

Cat::~Cat()
{
	cout("Cat destructor called");
	delete brain;
}