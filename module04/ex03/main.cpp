#include <string>
#include <iostream>
#include "color.hpp"

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int		main()
{
	ICharacter	*a = new Character("main");
	ICharacter	*target = new Character("target");
	a->equip(new Ice);
	a->equip(new Cure);
	a->equip(new Ice);
	a->equip(new Cure);
	a->equip(new Ice);
	a->unequip(-1);
	a->use(0, *target);
	a->use(1, *target);
	a->use(2, *target);
	a->use(3, *target);

	delete a;
	// IMateriaSource* src = new MateriaSource();
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());
	// ICharacter* me = new Character("me");
	// AMateria* tmp;
	// tmp = src->createMateria("ice");
	// me->equip(tmp);
	// tmp = src->createMateria("cure");
	// me->equip(tmp);
	// ICharacter* bob = new Character("bob");
	// me->use(0, *bob);
	// me->use(1, *bob);
	// delete bob;
	// delete me;
	// delete src;
	return (0);
}