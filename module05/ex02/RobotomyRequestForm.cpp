#include "RobotomyRequestForm.hpp"

/*
** ----------------------
** --- CANONICAL FORM ---
** ----------------------
*/

/*
** Constructor by default
*/

RobotomyRequestForm::RobotomyRequestForm( void ) : Form("RobotomyRequestForm", 72, 45)
{
	//std::cout << "RobotomyRequestForm: Constructor by default called" << std::endl;
	return ;
}

/*
** Constructor by target
*/

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : Form("RobotomyRequestForm", 72, 45)
{
	this->_target = target;
	return ;
}

/*
** Constructor by copie
*/

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const &rhs ) : Form(rhs.getName(), this->getSignGrade(), this->getExecGrade())
{
	//std::cout << "RobotomyRequestForm: Constructor by copie called" << std::endl;
	return ;
}

/*
** Assignment Overload
*/

RobotomyRequestForm	&RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	if (&rhs != this)
		*this = RobotomyRequestForm(rhs);
	//std::cout << "RobotomyRequestForm: Assignment's overload called" << std::endl;
	return ( *this );
}

/*
** Destructor
*/

RobotomyRequestForm::~RobotomyRequestForm( void )
{
	//std::cout << "RobotomyRequestForm: Destructor called" << std::endl;
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

std::string RobotomyRequestForm::getTarget( void ) const
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

void	RobotomyRequestForm::execute( Bureaucrat const &executor ) const
{
	try
	{
		srand((unsigned) time(0));
		this->checkProcess(executor);
		if (rand() % 2 == 1)
			std::cout << "Brrrrrrrr.... " << this->getTarget() << " has been robotomized" << std::endl;
		else
			std::cout << "Brrrrrrrr.... " << this->getTarget() << "'s robotomization failed !" << std::endl;		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	(void)executor;
	return ;
}

/*
** ----------------------
*/