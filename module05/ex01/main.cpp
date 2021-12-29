#include "Bureaucrat.hpp"
#include "color.hpp"
#include "Form.hpp"

int		main()
{
	Bureaucrat	a = Bureaucrat("bob", 40);
	std::cout <<  a << std::endl << std::endl;
	Form form = Form("A21", 100, 50);
	std::cout << form << std::endl;
	form.beSigned(a);

	/* ---------- */

	Bureaucrat	b = Bureaucrat("Jacques", 110);
	std::cout << b << std::endl << std::endl;
	form.beSigned(b);

	/* ---------- */

	Bureaucrat	c = Bureaucrat("Laurent", 80);
	std::cout << std::endl << c << std::endl;
	c.signForm(form);

	/* ---------- */

	Bureaucrat	d = Bureaucrat("Jacky", 101);
	std::cout << std::endl << d << std::endl;

	d.signForm(form);

	return (0);
}