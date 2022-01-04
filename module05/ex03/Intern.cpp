#include "Intern.hpp"

/*
** ----------------------
** --- CANONICAL FORM ---
** ----------------------
*/

/*
** Constructor by default
*/

Intern::Intern( void )
{
	//std::cout << "Intern: Constructor by default called" << std::endl;
	this->ft_ptr[SCF] = &Intern::newSCF;
	this->ft_ptr[RRF] = &Intern::newRRF;
	this->ft_ptr[PPF] = &Intern::newPPF;
	return ;
}

/*
** Constructor by copie
*/

Intern::Intern( Intern const &rhs ) 
{
	(void)rhs;
	return ;
}

/*
** Assignment Overload
*/

Intern	&Intern::operator=( Intern const & rhs )
{

	//std::cout << "Intern: Assignment's overload called" << std::endl;
	(void)rhs;
	return ( *this );
}

/*
** Destructor
*/

Intern::~Intern( void )
{
	//std::cout << "Intern: Destructor called" << std::endl;
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

Form	*Intern::newSCF( std::string const target ) const
{
	return (new ShrubberyCreationForm(target));
}

Form	*Intern::newRRF( std::string const target ) const
{
	return (new RobotomyRequestForm(target));
}

Form	*Intern::newPPF( std::string const target ) const
{
	return (new PresidentialPardonForm(target));
}

Form	*Intern::makeForme( std::string const formName, std::string const target )
{
	std::string	tab[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	(void)formName;
	(void)target;
	int	i = 0;
	while (i < 3)
	{
		if (tab[i] == formName)
			break ;
		++i;
	}
	try
	{
		if (i == 3)
			throw UknownFormException("Error: uknown form name");
		return ((this->*ft_ptr[i])(target));
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return NULL;
}

/*
** ----------------------
*/