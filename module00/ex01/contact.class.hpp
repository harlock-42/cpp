#ifndef CONTACT_CLASS_H
#define CONTACT_CLASS_H

class Contact
{
	private:

		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;

	public:

		Contact( void );
		~Contact( void );
		void setdata( void );
		std::string getdata( std::string const str) const;
		std::string fix( std::string str ) const;
		void display( int index ) const;
};

#endif