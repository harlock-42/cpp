#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
// #include "Brain.hpp"
#include "color.hpp"

int main()
{
	Cat *cat = new Cat();
	AAnimal	*cat1 = new Cat();

	cat->makeSound();
	cat1->makeSound();

	delete cat;
	delete cat1;
}
