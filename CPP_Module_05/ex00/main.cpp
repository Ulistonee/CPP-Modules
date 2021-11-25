#include "Bureaucrat.hpp"

int 		main()
{
	try
	{
		Bureaucrat		innokentiy("bureaucrat", 152);
	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}
	try
	{
		Bureaucrat		innokentiy("bureaucrat", 1);
//		innokentiy.incrementGrade();
		std::cout << innokentiy;
	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}
}