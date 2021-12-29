#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>
# include <string>
# include <exception>

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

		std::string const	getName( void ) const;
		int					getGrade( void ) const;

		// Setter

		// Action Methods

		void	incGrade( void );
		void	decGrade( void );

		// Exception methods

		void	isTooHigh( int grade ) const;
		void	isTooLow( int grade ) const;

		// Exception class

		class GradeTooLowException : public std::exception
		{
			private:

				std::string		_error;
			
			public:

				GradeTooLowException( std::string error ) throw();

				virtual	const	char	*what( void ) const throw();

				virtual	~GradeTooLowException( void ) throw() {}
		};

		class GradeTooHighException : public std::exception
		{
			private:
				
				std::string	const	_error;

			public:

				GradeTooHighException( std::string const error ) throw();

				virtual	const	char	*what( void ) const throw();

				virtual	~GradeTooHighException( void ) throw() {}
		};

};

std::ostream		&operator<<(std::ostream &os, Bureaucrat const &rhs );

#endif