#include "WrongCat.h"

WrongCat::WrongCat() : WrongAnimal()
{
	type = "WrongCat";
	cout("WrongCat constructor called");
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal(copy)
{
	cout("WrongCat copy constructor called");
}

WrongCat& WrongCat::operator=(const WrongCat& copy)
{
	type = copy.type;
	cout("WrongCat assignment operator called");
	return *this;
}

void WrongCat::makeSound() const
{
	cout("Meow");
}

WrongCat::~WrongCat()
{
	cout("WrongCat destructor called");
}