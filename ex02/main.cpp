#include "Animal.h"
#include "Cat.h"
#include "Dog.h"

int main( void )
{
	cout("");
	// Animal* animal = new Animal(); doesn't compile
	Animal* dog = new Dog();
	Animal* cat = new Cat();

	cout("");
	std::cout << "Dog->getType [" << dog->getType() << "] " << std::endl;
	std::cout << "Cat->getType [" << cat->getType() << "] " << std::endl;
	cat->makeSound(); //will output the cat sound! (not the Animal)
	dog->makeSound(); //will output the dog sound! (not the Animal)
	
	cout("");
	Dog d1;
	Dog d2(d1);

	cout("");
	cout("d1.getBrain : " << d1.getBrain());
	cout("d2.getBrain : " << d2.getBrain());

	cout("");
	Cat c1;
	Cat c2(c1);

	cout("");
	cout("c1.getBrain : " << c1.getBrain());
	cout("c2.getBrain : " << c2.getBrain());

	cout("");
	delete dog;
	delete cat;
	cout("");
}