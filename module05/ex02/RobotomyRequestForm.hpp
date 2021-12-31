#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

# include <iostream>
# include <string>
# include "Form.hpp"
# include <cstdlib>

class RobotomyRequestForm : public Form
{
	private:

		std::string	_target;

	public:

		// Canonical Form

		RobotomyRequestForm( void );
		RobotomyRequestForm( std::string target );
		RobotomyRequestForm( RobotomyRequestForm const &rhs );
		RobotomyRequestForm &operator=( RobotomyRequestForm const &rhs );
		~RobotomyRequestForm( void );

		// Getter

		std::string	getTarget( void ) const;

		// Setter

		// Action Methods

		virtual	void	execute( Bureaucrat const &executor ) const;

};

#endif