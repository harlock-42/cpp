#include "Bureaucrat.hpp"
#include "color.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int		main()
{

	std::cout << YELLOW << " *** ShrubberyCreationForm ***" << NC << std::endl << std::endl;
	Form	*form = new ShrubberyCreationForm("TREE");
	std::cout << *form << std::endl;

	Bureaucrat a = Bureaucrat("Pierre", 150);
	Bureaucrat b = Bureaucrat("Paul", 140);
	Bureaucrat c = Bureaucrat("Jacques", 130);
	std::cout << std::endl;

	std::cout << PURPLE << a << NC << std::endl;
	form->beSigned(a);
	form->execute(a);
	std::cout << PURPLE << b << NC << std::endl;
	form->beSigned(b);
	form->execute(b);
	std::cout << PURPLE << c << NC << std::endl;
	form->beSigned(c);
	form->execute(c);

	delete	form;
	std::cout << std::endl << std::endl << YELLOW << " *** RobotomyRequestForm *** " << NC << std::endl << std::endl;

	a.setGrade(80);
	b.setGrade(60);
	c.setGrade(40);
	form = new RobotomyRequestForm("Human");
	std::cout << *form << std::endl;
	std::cout << std::endl;
	std::cout << PURPLE << a << NC << std::endl;
	form->beSigned(a);
	form->execute(a);
	std::cout << PURPLE << b << NC << std::endl;
	form->beSigned(b);
	form->execute(b);
	std::cout << PURPLE << c << NC << std::endl;
	form->beSigned(c);
	form->execute(c);
	delete form;

		std::cout << std::endl << std::endl << YELLOW << " *** PresidentialPardonForm *** " << NC << std::endl << std::endl;

	a.setGrade(30);
	b.setGrade(10);
	c.setGrade(1);
	form = new PresidentialPardonForm("This man");
	std::cout << *form << std::endl;
	std::cout << std::endl;
	std::cout << PURPLE << a << NC << std::endl;
	form->beSigned(a);
	form->execute(a);
	std::cout << PURPLE << b << NC << std::endl;
	form->beSigned(b);
	form->execute(b);
	std::cout << PURPLE << c << NC << std::endl;
	form->beSigned(c);
	form->execute(c);
	delete form;

	std::cout << std::endl << std::endl << YELLOW << " *** Bureaucrat.executeForm() *** " << NC << std::endl << std::endl;

	a.setGrade(80);
	b.setGrade(60);
	c.setGrade(40);
	form = new RobotomyRequestForm("Human");
	std::cout << *form << std::endl;
	std::cout << std::endl;
	std::cout << PURPLE << a << NC << std::endl;
	a.signForm(*form);
	a.executeForm(*form);
	std::cout << PURPLE << b << NC << std::endl;
	b.signForm(*form);
	b.executeForm(*form);
	std::cout << PURPLE << c << NC << std::endl;
	c.signForm(*form);
	c.executeForm(*form);
	delete form;
	
	return (0);
}