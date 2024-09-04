#include "Cat.h"

Cat::Cat() : Animal()
{
	type = "Cat";
	brain = new Brain();
	cout("Cat constructor called");
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
	brain = new Brain();
	*this = copy;
	cout("Cat copy constructor called");
}

Cat& Cat::operator=(const Cat& copy)
{
	type = copy.type;
	delete brain;
	brain = new Brain(*(copy.brain));
	cout("Cat assignment operator called");
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
	delete brain;
	cout("Cat destructor called");
}