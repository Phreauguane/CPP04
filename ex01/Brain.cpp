#include "Brain.h"

Brain::Brain()
{
	cout("Brain constructor called");
}

Brain::Brain(const Brain& copy)
{
	*this = copy;
	cout("Brain copy constructor called");
}

Brain& Brain::operator=(const Brain& copy)
{
	for (int i = 0; i < 100; i++)
	{
		ideas[i] = copy.ideas[i];
	}
	cout("Brain assignment operator called");

	return *this;	
}

Brain::~Brain()
{
	cout("Brain destructor called");
}