#pragma once

#include <string>
#include <iostream>

#define cout(x) std::cout << "\033[39m\033[49m" << x << std::endl

class Brain
{
private:
	std::string *ideas;
public:
	Brain();
	Brain(const Brain&);
	Brain& operator=(const Brain&);

	~Brain();
};