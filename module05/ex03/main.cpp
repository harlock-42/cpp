#include "Bureaucrat.hpp"
#include "color.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int		main()
{

	Intern	intern;
	Form	*form = intern.makeForme("PresidentialPardonForm", "harlock");
	std::cout << *form << std::endl;
	delete	form;
	form = intern.makeForme("ShrubberyCreationForm", "harlock");
	std::cout << *form << std::endl;
	delete	form;
	form = intern.makeForme("RobotomyRequestForm", "harlock");
	std::cout << *form << std::endl;
	delete	form;
	form = intern.makeForme("Form", "harlock");

	return (0);
}