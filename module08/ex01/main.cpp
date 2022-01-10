#include "span.hpp"

int		main(void)
{
	Span sp = Span(6);

	sp.addNumber(-1);
	sp.addNumber(1);
	sp.addNumber(-8);
	sp.addNumber(-5);
	sp.addNumber(8);
	sp.addNumber(11);

	std::cout << sp << std::endl;
	std::cout << "longest span = " << sp.longestSpan() << std::endl;
	std::cout << "shortest span = " << sp.shortestSpan() << std::endl;

	Span sp2 = Span(10000);

	for (int i = 0; i < 10000; ++i)
		sp2.addNumber(i);
	std::cout << std::endl << " ** range of 10000 **" << std::endl << std::endl;
	std::cout << "longest span = " << sp2.longestSpan() << std::endl;
	std::cout << "shortest span = " << sp2.shortestSpan() << std::endl;
	return (0);
}