#pragma once

#include <string>
#include <iostream>

#define cout(x) std::cout << x << std::endl

class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal&);
	WrongAnimal& operator=(const WrongAnimal&);

	void makeSound() const;
	std::string getType() const;

	virtual ~WrongAnimal();
};