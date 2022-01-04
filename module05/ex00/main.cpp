#include "Bureaucrat.hpp"
#include "color.hpp"

int		main()
{
	
	std::cout << PURPLE << "input: grade = 151" << NC << std::endl << std::endl;
	Bureaucrat("", 151);
	std::cout << PURPLE << "input: grade = 0" << NC << std::endl << std::endl;
	Bureaucrat("", 0);
	std::cout << PURPLE << "input: grade = 1" << NC << std::endl << std::endl;

	std::cout << std::endl << "--------------------" << std::endl << std::endl;
	
	Bureaucrat a = Bureaucrat("bob", 2);
	std::cout << PURPLE << "Incrementation of bob's grade" << NC << std::endl;
	std::cout << a << std::endl;
	std::cout << PURPLE << "Incrementation of bob's grade" << NC << std::endl;
	a.incGrade();
	std::cout << a << std::endl;
	std::cout << PURPLE << "Incrementation of bob's grade" << NC << std::endl;
	a.incGrade();
	std::cout << a << std::endl;

	std::cout << std::endl << "--------------------" << std::endl << std::endl;

	Bureaucrat b = Bureaucrat("bob", 149);
	std::cout << b << std::endl;
	std::cout << PURPLE << "Decrementation of bob's grade" << NC << std::endl;
	b.decGrade();
	std::cout << b << std::endl;
	std::cout << PURPLE << "Decrementation of bob's grade" << NC << std::endl;
	b.decGrade();
	std::cout << b << std::endl;

}