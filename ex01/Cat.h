#pragma once

#include "Animal.h"
#include "Brain.h"

class Cat : public Animal
{
private:
	Brain* brain;
public:
	Cat();
	Cat(const Cat&);
	Cat& operator=(const Cat&);

	void makeSound() const;
	Brain* getBrain() const;

	virtual ~Cat();
};