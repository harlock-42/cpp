#include "PresidentialPardonForm.hpp"

/*
** ----------------------
** --- CANONICAL FORM ---
** ----------------------
*/

/*
** Constructor by default
*/

PresidentialPardonForm::PresidentialPardonForm( void ) : Form("PresidentialPardonForm", 25, 5)
{
	//std::cout << "PresidentialPardonForm: Constructor by default called" << std::endl;
	return ;
}

/*
** Constructor by target
*/

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : Form("PresidentialPardonForm", 25, 5)
{
	this->_target = target;
	//std::cout << "PresidentialPardonForm: Constructor by default called" << std::endl;
	return ;
}

/*
** Constructor by copie
*/

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const &rhs ) : Form(rhs.getName(), rhs.getSignGrade(), rhs.getExecGrade(), rhs.getSign())
{
	//std::cout << "PresidentialPardonForm: Constructor by copie called" << std::endl;
	return ;
}

/*
** Assignment Overload
*/

PresidentialPardonForm	&PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	if (this != &rhs)
		*this = rhs;
	return ( *this );
}

/*
** Destructor
*/

PresidentialPardonForm::~PresidentialPardonForm( void )
{
	//std::cout << "PresidentialPardonForm: Destructor called" << std::endl;
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

std::string	PresidentialPardonForm::getTarget( void ) const
{
	return (this->_target);
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

void	PresidentialPardonForm::execute( Bureaucrat const &executor ) const
{
	try
	{
		this->checkProcess(executor);
		std::cout << this->getTarget() << " has been forgiven by Zafod Beeblebrox" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

/*
** ----------------------
*/