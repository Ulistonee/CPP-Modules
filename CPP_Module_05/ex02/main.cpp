#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int 		main()
{
	try
	{
		Form						*form;
		Bureaucrat					bureaucrat("bureaucrat", 1);


		form = new PresidentialPardonForm();
		std::cout << *form << std::endl;
		bureaucrat.signForm(form);
		bureaucrat.executeForm(*form);
		delete form;
	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}
}