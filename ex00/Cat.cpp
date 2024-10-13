#include "Cat.h"

Cat::Cat() : Animal()
{
	cout("Cat constructor called");
	type = "Cat";
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
	cout("Cat copy constructor called");
}

Cat& Cat::operator=(const Cat& copy)
{
	cout("Cat assignment operator called");
	type = copy.type;
	return *this;
}

void Cat::makeSound() const
{
	cout("Meow");
}

Cat::~Cat()
{
	cout("Cat destructor called");
}