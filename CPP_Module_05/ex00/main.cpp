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
		std::cout << "-------------------------------------------\n";
	}
	try
	{
		Bureaucrat		innokentiy("bureaucrat", 1);
		std::cout << innokentiy.getName() << std::endl;
		std::cout << innokentiy.getGrade() << std::endl;
		std::cout << "-------------------------------------------\n";
		innokentiy.incrementGrade();
	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}
	try
	{
		Bureaucrat		innokentiy("bureaucrat", 1);
		std::cout << "-------------------------------------------\n";
		innokentiy.decrementGrade();
		std::cout << innokentiy;
	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}
}