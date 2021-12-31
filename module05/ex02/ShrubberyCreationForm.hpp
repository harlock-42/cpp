#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

# include <iostream>
# include <string>
# include <fstream>
# include "Form.hpp"

# define TREE "          &&& &&  & &&\n\
      && &\\/&\\|& ()|/ @, &&\n\
      &\\/(/&/&||/& /_/)_&/_&\n\
   &() &\\/&|()|/&\\/ \'%\" & ()\n\
  &_\\_&&_\\ |& |&&/&__%_/_& &&\n\
&&   && & &| &| /& & % ()& /&&\n\
 ()&_---()&\\&\\|&&-&&--%---()~\n\
     &&     \\|||\n\
             |||\n\
             |||\n\
             |||\n\
       , -=-~  .-^- _\n"

class ShrubberyCreationForm : public Form
{
	private:

		std::string	_target;

	public:

		// Canonical Form

		ShrubberyCreationForm( void );
		ShrubberyCreationForm( std::string target );
		ShrubberyCreationForm( ShrubberyCreationForm const &rhs );
		ShrubberyCreationForm &operator=( ShrubberyCreationForm const &rhs );
		~ShrubberyCreationForm( void );

		// Getter

		std::string	getTarget( void ) const;

		// Setter

		// Action Methods

		virtual	void execute( Bureaucrat const &executor ) const;

};

#endif