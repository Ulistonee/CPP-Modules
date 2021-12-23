#include "span.hpp"
#include "span.ipp"

int			main()
{
	Span		span(4);

	try
	{
		span.addNumber(1);
		span.addNumber(20);
		span.addNumber(7);
		span.addNumber(8);
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	span.print();
	try
	{
		std::cout << "longest span is " << span.longestSpan() << std::endl;
		std::cout << "shortest span is " << span.shortestSpan() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::multiset<int>			set;
	Span						anotherSpan(10000);
	for (int i = 0; i < 15; ++i)
	{
		set.insert(rand() % 15);
	}
	anotherSpan.addNumbers(set.begin(), set.end());
	anotherSpan.print();
	std::cout << "longest span is " << anotherSpan.longestSpan() << std::endl;
	std::cout << "shortest span is " << anotherSpan.shortestSpan() << std::endl;
	return (0);
}