#ifndef PHONE_BOOK_CLASS_H
#define PHONE_BOOK_CLASS_H

#include "contact.class.hpp"

class Phone_book
{
	private:
		Contact	_contact[8];
	public:

		Phone_book( void );
		~Phone_book( void );
		void start( void );

};

#endif