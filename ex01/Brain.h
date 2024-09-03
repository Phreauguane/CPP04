#pragma once

#include <string>
#include <iostream>

#define cout(x) std::cout << x << std::endl

class Brain
{
private:
	std::string ideas[100];
public:
	Brain();
	Brain(const Brain&);
	Brain& operator=(const Brain&);

	~Brain();
};