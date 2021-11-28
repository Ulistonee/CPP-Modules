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
		std::cout << innokentiy.getName() << std::endl;
		std::cout << innokentiy.getGrade() << std::endl;
		innokentiy.incrementGrade();
	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}
	try
	{
		Bureaucrat		innokentiy("bureaucrat", 1);
		innokentiy.decrementGrade();
		std::cout << innokentiy;

	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}
}