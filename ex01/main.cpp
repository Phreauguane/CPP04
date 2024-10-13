#include "Animal.h"
#include "Cat.h"
#include "Dog.h"

int main( void )
{
	cout("");
	Animal* animal = new Animal();
	Animal* dog = new Dog();
	Animal* cat = new Cat();

	cout("");
	std::cout << "Dog->getType [" << dog->getType() << "] " << std::endl;
	std::cout << "Cat->getType [" << cat->getType() << "] " << std::endl;
	std::cout << "Animal->getType [" << animal->getType() << "] " << std::endl;
	cat->makeSound(); //will output the cat sound! (not the Animal)
	dog->makeSound(); //will output the dog sound! (not the Animal)
	animal->makeSound(); //will output the animal sound
	
	cout("");
	Dog d1;
	Dog d2(d1);

	cout("");
	cout("Dog deep copy test :");
	cout("  d1.getBrain : " << d1.getBrain());
	cout("  d2.getBrain : " << d2.getBrain());

	cout("");
	Cat c1;
	Cat c2(c1);

	cout("");
	cout("Cat deep copy test :");
	cout("  c1.getBrain : " << c1.getBrain());
	cout("  c2.getBrain : " << c2.getBrain());

	cout("");
	delete animal;
	delete dog;
	delete cat;
	cout("");
}