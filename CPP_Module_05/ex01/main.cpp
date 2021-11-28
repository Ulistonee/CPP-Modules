#include "Bureaucrat.hpp"
#include "Form.hpp"

int 		main()
{
	try
	{
		Bureaucrat		vasya("vasya", 1);
		Form			form("form", 10, 10);
		std::cout << form;
		vasya.signForm(form);
	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}
	try
	{
		Bureaucrat		vasya("vasya", 10);

		Form			form2("form", 1, 2);
		form2.beSigned(vasya);
	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}
	try
	{
		Form			form2("form", 0, 2);
	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}
}