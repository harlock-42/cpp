#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

# include <iostream>
# include <string>
#include "Form.hpp"

class PresidentialPardonForm : virtual public Form
{
	private:

		std::string	_target;

	public:

		// Canonical Form

		PresidentialPardonForm( void );
		PresidentialPardonForm( std::string target );
		PresidentialPardonForm( PresidentialPardonForm const &rhs );
		PresidentialPardonForm &operator=( PresidentialPardonForm const &rhs );
		~PresidentialPardonForm( void );

		// Getter

		std::string	getTarget( void ) const;

		// Setter

		// Action Methods

		virtual void	execute( Bureaucrat const &executor ) const;

};

#endif