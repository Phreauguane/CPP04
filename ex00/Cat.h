#include "Animal.h"

class Cat : public Animal
{
public:
	Cat();
	Cat(const Cat&);
	Cat& operator=(const Cat&);

	void makeSound();

	virtual ~Cat();
};