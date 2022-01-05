#include "ShrubberyCreationForm.hpp"

/*
** ----------------------
** --- CANONICAL FORM ---
** ----------------------
*/

/*
** Constructor by default
*/

ShrubberyCreationForm::ShrubberyCreationForm( void ) : Form("ShrubberyCreationForm", 145, 137)
{
	//std::cout << "ShrubberyCreationForm: Constructor by default called" << std::endl;
	return ;
}

/*
** Constructor by target
*/

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : Form("ShrubberyCreationForm", 145, 137)
{
	this->_target = target;
	return ;
}

/*
** Constructor by copie
*/

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const &rhs ) : Form(rhs.getName(), rhs.getSignGrade(), rhs.getExecGrade(), rhs.getSign())
{
	//std::cout << "ShrubberyCreationForm: Constructor by copie called" << std::endl;
	return ;
}

/*
** Assignment Overload
*/

ShrubberyCreationForm	&ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{

	if (&rhs != this)
		*this = rhs;
	return ( *this );
}

/*
** Destructor
*/

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	//std::cout << "ShrubberyCreationForm: Destructor called" << std::endl;
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

std::string	ShrubberyCreationForm::getTarget( void ) const
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

void	ShrubberyCreationForm::execute( Bureaucrat const &executor ) const
{
	try
	{
		this->checkProcess(executor);
		std::string	fileName = this->getTarget() + "_shrubbery";
		std::ofstream	file(fileName.c_str());
		file << TREE;
		file.close();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}

/*
** ----------------------
*/