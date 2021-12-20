#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include "color.hpp"

int main()
{
	Animal *tab[100];
	for (int i = 0; i < 50; ++i)
	{
		tab[i] =  new Cat();
		tab[i + 50] = new Dog();
	}
	for (int i = 0; i < 100; ++i)
		delete tab[i];
	return (0);
}
