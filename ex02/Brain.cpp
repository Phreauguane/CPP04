#include "Brain.h"

Brain::Brain()
{
	cout("Brain constructor called");
	ideas = new std::string[100];
}

Brain::Brain(const Brain& copy)
{
	cout("Brain copy constructor called");
	ideas = new std::string[100];
	*this = copy;
}

Brain& Brain::operator=(const Brain& copy)
{
	cout("Brain assignment operator called");
	for (int i = 0; i < 100; i++)
	{
		ideas[i] = copy.ideas[i];
	}

	return *this;	
}

Brain::~Brain()
{
	cout("Brain destructor called");
	delete [] ideas;
}