#include "WrongAnimal.h"

WrongAnimal::WrongAnimal()
{
	type = "WrongAnimal";
	cout("WrongAnimal constructor called");
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	*this = copy;
	cout("WrongAnimal copy constructor called");
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy)
{
	type = copy.type;
	cout("WrongAnimal assignment operator called");
	return *this;
}

void WrongAnimal::makeSound() const
{
	cout("* WrongAnimal sound *");
}

std::string WrongAnimal::getType() const
{
	return type;
}

WrongAnimal::~WrongAnimal()
{
	cout("WrongAnimal destructor called");
}