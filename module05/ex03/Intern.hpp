#ifndef INTERN_H
# define INTERN_H

# include <iostream>
# include <string>
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

enum
{
	SCF = 0,
	RRF,
	PPF,
};

class Intern
{
	private:

		Form	*(Intern::*ft_ptr[3])( std::string const target ) const;

	public:

		// Canonical Form

		Intern( void );
		Intern( Intern const &rhs );
		Intern &operator=( Intern const &rhs );
		~Intern( void );

		// Getter

		// Setter

		// Action Methods

		Form	*newSCF( std::string const target ) const;
		Form	*newRRF( std::string const target ) const;
		Form	*newPPF( std::string const target ) const;

		Form	*makeForme( std::string const formName, std::string const target );

	class UknownFormException : public std::exception
		{
			private:

				std::string	const	_error;

			public:
				
				UknownFormException(std::string const error) throw() : _error(error) {}

				virtual	const	char	*what( void ) const	throw()
				{
					return (this->_error.c_str());
				}

				virtual	~UknownFormException( void ) throw() {}
		};

};

#endif