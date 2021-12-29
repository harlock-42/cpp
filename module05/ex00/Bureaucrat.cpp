#include "Bureaucrat.hpp"

/*
** ----------------------
** --- CANONICAL FORM ---
** ----------------------
*/

/*
** Constructor by default
*/

Bureaucrat::Bureaucrat( void ) _name("")
{
	// std::cout << "Bureaucrat: Constructor by default called" << std::endl;
	return ;
}

/*
** Constructor by name and grade
*/

Bureaucrat::Bureaucrat( std::string const name, int grade ) : _name(name), _grade(grade);
{
	// std::cout << "Bureaucrat: Constructor by default called" << std::endl;
	return ;
}

/*
** Constructor by copie
*/

Bureaucrat::Bureaucrat( Bureaucrat const &rhs )
{
	//std::cout << "Bureaucrat: Constructor by copie called" << std::endl;
	this->_name = rhs._name;
	return ;
}

/*
** Assignment Overload
*/

Bureaucrat	&Bureaucrat::operator=( Bureaucrat const & rhs )
{

	//std::cout << "Bureaucrat: Assignment's overload called" << std::endl;
	this->_name = rhs._name;
	return ( *this );
}

/*
** Destructor
*/

Bureaucrat::~Bureaucrat( void )
{
	// std::cout << "Bureaucrat: Destructor called" << std::endl;
	return ;
}

/*
** ----------------------
*/

/*
** --------------
** --- GETTER ---
** --------------
*/

/*
** --------------
*/

/*
** --------------
** --- SETTER ---
** --------------
*/

/*
** --------------
*/

/*
** ----------------------
** --- ACTION METHODS ---
** ----------------------
*/

/*
** ----------------------
*/

std::ostream	&operator<<(std::ostream &os, Bureaucrat const &rhs)
{
	os << rhs.;
	return (os);
}