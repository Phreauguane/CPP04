#include "WrongAnimal.h"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(const WrongCat&);
	WrongCat& operator=(const WrongCat&);

	void makeSound() const;

	virtual ~WrongCat();
};