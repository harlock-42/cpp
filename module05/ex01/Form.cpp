#include "Form.hpp"

/*
** ----------------------
** --- CANONICAL FORM ---
** ----------------------
*/

/*
** Constructor by default
*/

Form::Form( void )
{
	//std::cout << Form: Constructor by default called << std::endl;
	return ;
}

/*
** Constructor by name and grad
*/

Form::Form( std::string const name, int signGrade, int execGrade, bool sign ) : _name(name), _signGrade(0), _execGrade(0)
{
	this->_sign = sign;
	try
	{
		this->isTooLow(signGrade, 150, "Sign grade is to low");
		this->isTooLow(execGrade, 150, "Exec grade is to low");
		this->isTooHigh(execGrade, 1, "Exec grade is to high");
		this->isTooHigh(signGrade, 1, "Sign grade is to high");
		this->_signGrade = signGrade;
		this->_execGrade = execGrade;
	}
	catch (std::exception &e)
	{
		std::cerr << "ERROR: " << e.what() << std::endl;
	}
	return ;
}

/*
** Constructor by copie
*/

Form::Form( Form const &rhs )
{
	//std::cout << Form: Constructor by copie called << std::endl;
	*this = rhs;
	return ;
}

/*
** Assignment Overload
*/

Form	&Form::operator=( Form const & rhs )
{

	//std::cout << Form: Assignment's overload called << std::endl;
	(void)rhs;
	return ( *this );
}

/*
** Destructor
*/

Form::~Form( void )
{
	//std::cout << Form: Destructor called << std::endl;
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

std::string	const	Form::getName( void ) const
{
	return (this->_name);
}

bool				Form::getSign( void ) const
{
	return (this->_sign);
}

int					Form::getSignGrade( void ) const
{
	return (this->_signGrade);
}

int					Form::getExecGrade( void ) const
{
	return (this->_execGrade);
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

void	Form::beSigned( Bureaucrat const &src )
{
	try
	{
		this->isTooLow(src.getGrade(), this->getSignGrade(), src.getName() + " cannot sign " + this->getName());
		this->_sign = true;
		std::cout << src.getName() + " sign " + this->getName() << std::endl;
	}
	catch ( std::exception const &e)
	{
		std::cerr << "ERROR: " << e.what() << std::endl;
	}
	return ;
}

/*
** ----------------------
*/

/*
** --------------------------
** --- EXCEPTIONS METHODS ---
** --------------------------
*/

void	Form::isTooLow( int grade, int toCmp, std::string const error ) const
{
	if (grade > toCmp)
	{
		throw GradeToLowException(error);
	}
	return ;
}

void	Form::isTooHigh( int grade, int toCmp, std::string const error ) const
{
	if (grade < toCmp)
		throw GradeToHighException(error);
	return ;
}


/*
** --------------------------
*/


/*
** --------------------------------
** --- METHODS CLASS EXCEPTIONS ---
** --------------------------------
*/

Form::GradeToLowException::GradeToLowException(std::string const error ) throw() : _error(error)
{
	(void)_error;
	return ;
}

const	char	*Form::GradeToLowException::what( void ) const throw()
{
	return (this->_error.c_str());
}

Form::GradeToHighException::GradeToHighException(std::string const error ) throw() : _error(error)
{
	(void)_error;
	return ;
}

const	char	*Form::GradeToHighException::what( void ) const throw()
{
	return (this->_error.c_str());
}

/*
** --------------------------------
*/

std::ostream	&operator<<( std::ostream &os, Form const &rhs )
{
	os << rhs.getName() << " ";
	if (rhs.getSign() == true)
		os << "is signed" << std::endl;
	else
		os << "is not signed" << std::endl;
	os << "Grade to sign : " << rhs.getSignGrade() << std::endl;
	os << "Grade to execute : " << rhs.getExecGrade() << std::endl;
	return (os);
}