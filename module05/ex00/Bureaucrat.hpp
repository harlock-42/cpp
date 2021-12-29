#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>
# include <string>

class Bureaucrat
{
	private:

		std::string	const	_name;
		int					_grade;

	protected:

	public:

		// Canonical Form

		Bureaucrat( void );
		Bureaucrat( std::string const name, int grad );
		Bureaucrat( Bureaucrat const &rhs );
		Bureaucrat &operator=( Bureaucrat const &rhs );
		~Bureaucrat( void );

		// Getter

		// Setter

		// Action Methods

};

std::ostream		&operator<<(std::ostream &os, Bureaucrat const &rhs );

#endif