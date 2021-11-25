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
	try
	{
		Form			form("form", false, 1, 0);
		std::cout << form;
	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}
	try
	{
		Form			form2("form", false, 1, 2);
		std::cout << form2;
	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}
}