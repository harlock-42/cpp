#include "Bureaucrat.hpp"

/*
** ----------------------
** --- CANONICAL FORM ---
** ----------------------
*/

/*
** Constructor by default
*/

Bureaucrat::Bureaucrat( void ) : _name(""), _grade(150)
{
	// std::cout << "Bureaucrat: Constructor by default called" << std::endl;
	return ;
}

/*
** Constructor by name and grade
*/

Bureaucrat::Bureaucrat( std::string const name, int grade ) : _name(name), _grade(0)
{
	try
	{
		this->isTooLow(grade);
		this->isTooHigh(grade);
		this->_grade = grade;
	}
	catch (std::exception const &e)
	{
		std::cerr << "ERROR: " << e.what() << std::endl;
	}

	// std::cout << "Bureaucrat: Constructor by default called" << std::endl;
	return ;
}

/*
** Constructor by copie
*/

Bureaucrat::Bureaucrat( Bureaucrat const &rhs ) : _name(rhs._name), _grade(rhs._grade)
{
	//std::cout << "Bureaucrat: Constructor by copie called" << std::endl;
	return ;
}

/*
** Assignment Overload
*/

Bureaucrat	&Bureaucrat::operator=( Bureaucrat const & rhs )
{
	//std::cout << "Bureaucrat: Assignment's overload called" << std::endl;
	this->_grade = rhs.getGrade();
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

// _name;

std::string	const	Bureaucrat::getName( void ) const
{
	return (this->_name);
}

// _grade

int					Bureaucrat::getGrade( void ) const
{
	return (this->_grade);
}

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

void	Bureaucrat::incGrade( void )
{
	try
	{
		this->isTooHigh(this->_grade - 1);
		this->_grade--;
	}
	catch ( std::exception &e)
	{
		std::cerr << "ERROR: " << e.what() << std::endl;
	}
}

void	Bureaucrat::decGrade( void )
{
	try
	{
		this->isTooLow(_grade + 1);
		this->_grade++;
	}
	catch ( std::exception &e)
	{
		std::cerr << "ERROR: " << e.what() << std::endl;
	}
}

/*
** ----------------------
*/

/*
** -------------------------
** --- EXCEPTION METHODS ---
** -------------------------
*/

void	Bureaucrat::isTooHigh( int grade ) const
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException("Bureaucrat's grade is too high");
}

void	Bureaucrat::isTooLow( int grade ) const
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException("Bureaucrat's grade is too low");
}

/*
** -------------------------
*/

/*
** -------------------------------
** --- EXCEPTION CLASS METHODS ---
** -------------------------------
*/

Bureaucrat::GradeTooLowException::GradeTooLowException( std::string error ) throw() : _error(error)
{
	return ;
}

const	char	*Bureaucrat::GradeTooLowException::what( void ) const throw()
{
	return (_error.c_str());
}

Bureaucrat::GradeTooHighException::GradeTooHighException( std::string const error ) throw() : _error(error)
{
	return ;
}

const	char	*Bureaucrat::GradeTooHighException::what( void ) const throw()
{
	return (this->_error.c_str());
}

/*
** -------------------------------
*/

std::ostream	&operator<<(std::ostream &os, Bureaucrat const &rhs)
{
	os << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return (os);
}