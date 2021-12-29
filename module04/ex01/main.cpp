#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include "color.hpp"

int main()
{
	Animal *tab[10];
	for (int i = 0; i < 5; ++i)
	{
		tab[i] =  new Cat();
		tab[i]->setIdeas("I just want to sleep all the day...");
		tab[i + 5] = new Dog();
		tab[i + 5]->setIdeas("waf waf");
	}
	for (int i = 0; i < 10; ++i)
		std::cout << YELLOW << tab[i]->getIdeas() << NC << std::endl;
	for (int i = 0; i < 10; ++i)
		delete tab[i];
	std::cout << std::endl << "-----------------" << std::endl << std::endl;
	return (0);
}
