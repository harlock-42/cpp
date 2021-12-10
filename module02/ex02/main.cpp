#include "Fixed.hpp"

int main(void)
{
	// ==
	std::cout << Fixed(2.5f) << " == " << Fixed(3) << std::endl;
	if (Fixed(2.5f) == Fixed(3))
		std::cout << "True" << std::endl;
	else
		std::cout << "False" << std::endl;

	std::cout << std::endl;
	
	std::cout << Fixed(3.1f) << " == " << Fixed(3.1f) << std::endl;
	if (Fixed(3.1f) == Fixed(3.1f))
		std::cout << "True" << std::endl;
	else
		std::cout << "False" << std::endl;

	std::cout << std::endl;
	// !=
	std::cout << Fixed(2) << " != " << Fixed(3.1f) << std::endl;
	if (Fixed(2) != Fixed(3.1f))
		std::cout << "True" << std::endl;
	else
		std::cout << "False" << std::endl;


	std::cout << std::endl;
	
	std::cout << Fixed(3.1f) << " != " << Fixed(3.1f) << std::endl;
	if (Fixed(3.1f) != Fixed(3.1f))
		std::cout << "True" << std::endl;
	else
		std::cout << "False" << std::endl;
	
	std::cout << std::endl;
	// <
	std::cout << Fixed(2) << " < " << Fixed(3.1f) << std::endl;
	if (Fixed(2) < Fixed(3.1f))
		std::cout << "True" << std::endl;
	else
		std::cout << "False" << std::endl;


	std::cout << std::endl;
	
	std::cout << Fixed(3.1f) << " < " << Fixed(2) << std::endl;
	if (Fixed(3.1f) < Fixed(2))
		std::cout << "True" << std::endl;
	else
		std::cout << "False" << std::endl;

	std::cout << std::endl;
	// >
	std::cout << Fixed(2) << " > " << Fixed(3.1f) << std::endl;
	if (Fixed(2) > Fixed(3.1f))
		std::cout << "True" << std::endl;
	else
		std::cout << "False" << std::endl;


	std::cout << std::endl;
	
	std::cout << Fixed(3.1f) << " > " << Fixed(2) << std::endl;
	if (Fixed(3.1f) > Fixed(2))
		std::cout << "True" << std::endl;
	else
		std::cout << "False" << std::endl;

	std::cout << std::endl;
	// >=

	std::cout << Fixed(2) << " >= " << Fixed(3.1f) << std::endl;
	if (Fixed(2) >= Fixed(3.1f))
		std::cout << "True" << std::endl;
	else
		std::cout << "False" << std::endl;


	std::cout << std::endl;
	
	std::cout << Fixed(3.1f) << " >= " << Fixed(2) << std::endl;
	if (Fixed(3.1f) >= Fixed(2))
		std::cout << "True" << std::endl;
	else
		std::cout << "False" << std::endl;

	std::cout << std::endl;

	std::cout << Fixed(2.0f) << " >= " << Fixed(2) << std::endl;
	if (Fixed(3.1f) >= Fixed(2))
		std::cout << "True" << std::endl;
	else
		std::cout << "False" << std::endl;

	std::cout << std::endl;

	// <=

	std::cout << Fixed(2) << " <= " << Fixed(3.1f) << std::endl;
	if (Fixed(2) <= Fixed(3.1f))
		std::cout << "True" << std::endl;
	else
		std::cout << "False" << std::endl;


	std::cout << std::endl;
	
	std::cout << Fixed(3.1f) << " <= " << Fixed(2) << std::endl;
	if (Fixed(3.1f) <= Fixed(2))
		std::cout << "True" << std::endl;
	else
		std::cout << "False" << std::endl;

	std::cout << std::endl;

	std::cout << Fixed(2.0f) << " <= " << Fixed(2) << std::endl;
	if (Fixed(3.1f) <= Fixed(2))
		std::cout << "True" << std::endl;
	else
		std::cout << "False" << std::endl;

	std::cout << std::endl;

	// +

	std::cout << Fixed(2) << " + " << Fixed(3.1f) << " = " << Fixed(2) + Fixed(3.1f) << std::endl;
	std::cout << Fixed(2) << " - " << Fixed(3.1f) << " = " << Fixed(2) - Fixed(3.1f) << std::endl;
	std::cout << Fixed(2) << " * " << Fixed(3.1f) << " = " << Fixed(2) * Fixed(3.1f) << std::endl;
	std::cout << Fixed(2) << " / " << Fixed(3.1f) << " = " << Fixed(2) / Fixed(3.1f) << std::endl;

	// ++

	std::cout << std::endl;
	Fixed a = Fixed(0);
	std::cout << "a = " << a << std::endl;
	std::cout << "++a = " << ++a << std::endl;
	std::cout << "a++ = " << a++ << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "--a = " << --a << std::endl;
	std::cout << "a-- = " << a-- << std::endl;
	std::cout << "a = " << a << std::endl;

	// min max

	std::cout << std::endl;
	
	std::cout << "Fixed::min(Fixed(1), Fixed(2.5))" << std::endl;
	std::cout << Fixed::min(Fixed(1), Fixed(2.5f)) << std::endl;
	std::cout << "Fixed::max(Fixed(1), Fixed(2.5))" << std::endl;
	std::cout << Fixed::max(Fixed(1), Fixed(2.5f)) << std::endl;

	







	return 0;

}