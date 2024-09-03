#include "Animal.h"

class Dog : public Animal
{
public:
	Dog();
	Dog(const Dog&);
	Dog& operator=(const Dog&);

	void makeSound() const;

	virtual ~Dog();
};