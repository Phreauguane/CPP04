#include "Cat.h"

Cat::Cat() : Animal()
{
	type = "Cat";
	cout("Cat constructor called");
}

Cat::Cat(const Cat& copy) : Animal(copy)
{

}

Cat& Cat::operator=(const Cat& copy)
{

}