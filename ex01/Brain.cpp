#include "Brain.h"

Brain::Brain()
{
	ideas = new std::string[100];
	cout("Brain constructor called");
}

Brain::Brain(const Brain& copy)
{
	ideas = new std::string[100];
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
	delete [] ideas;
	cout("Brain destructor called");
}