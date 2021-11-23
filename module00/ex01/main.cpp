#include "header.hpp"


int	main()
{
	//Phone_book	instance;
	std::string str;
	Contact contact;
	contact.setdata();
	str = contact.getdata("first_name");
	str = contact.fix(str);
	std::cout << str << std::endl;
	contact.display(0);
	return (0);
}