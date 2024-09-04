#pragma once

#include "Animal.h"
#include "Brain.h"

class Dog : public Animal
{
private:
	Brain* brain;
public:
	Dog();
	Dog(const Dog&);
	Dog& operator=(const Dog&);

	void makeSound() const;
	Brain* getBrain() const;

	virtual ~Dog();
};