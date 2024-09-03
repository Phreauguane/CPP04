#pragma once

#include <string>
#include <iostream>

#define cout(x) std::cout << x << std::endl

class Animal
{
protected:
	std::string type;
public:
	Animal();
	Animal(const Animal&);
	Animal& operator=(const Animal&);

	virtual void makeSound() const;
	std::string getType() const;

	virtual ~Animal();
};