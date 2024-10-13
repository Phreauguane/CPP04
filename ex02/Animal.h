#pragma once

#include <string>
#include <iostream>

#define cout(x) std::cout << "\033[39m\033[49m" << x << std::endl

class Animal
{
protected:
	std::string type;
	Animal();
	Animal(const Animal&);
public:
	Animal& operator=(const Animal&);

	virtual void makeSound() const = 0;
	std::string getType() const;

	virtual ~Animal();
};