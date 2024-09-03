#include "Cat.h"

Cat::Cat() : Animal()
{
	type = "Cat";
	cout("Cat constructor called");
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
	cout("Cat copy constructor called");
}

Cat& Cat::operator=(const Cat& copy)
{
	type = copy.type;
	cout("Cat assignment operator called");
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