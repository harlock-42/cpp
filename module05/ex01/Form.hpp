#ifndef FORM_H
# define FORM_H

# include <iostream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:

		std::string		const	_name;
		int				const	_signGrade;
		int				const	_execGrade;
		bool					_sign;

	protected:

	public:

		// Canonical Form

		Form( void );
		Form( std::string const name, int signGrade, int execGrade, bool sign = false);
		Form( Form const &rhs );
		Form &operator=( Form const &rhs );
		~Form( void );

		// Getter

		std::string	const	getName( void ) const;
		int					getSignGrade( void ) const;
		int					getExecGrade( void ) const;
		bool				getSign( void ) const;

		// Setter

		void	setSign( bool sign );

		// Action Methods

		void	beSigned( Bureaucrat const &src );

		// Exceptions

		void	isTooLow(int grade, int toCmp, std::string const error) const;
		void	isTooHigh(int grade, int toCmp, std::string const error) const;


		class GradeToLowException : public std::exception
		{
			private:

				std::string	const	_error;

			public:
				
				GradeToLowException(std::string const error) throw();

				virtual	const	char	*what( void ) const	throw();

				virtual	~GradeToLowException( void ) throw() {}
		};


		class GradeToHighException : public std::exception
		{
			private:

				std::string	const	_error;

			public:
				
				GradeToHighException(std::string const error) throw();

				virtual	const	char	*what( void ) const	throw();

				virtual	~GradeToHighException( void ) throw() {}
		};
};

std::ostream	&operator<<(std::ostream &os, Form const &rhs);

#endif