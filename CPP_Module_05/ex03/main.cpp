#include "Bureaucrat.hpp"
#include "Intern.hpp"

int 		main()
{
	try
	{
		Intern 						intern;
		Bureaucrat					bureaucrat("bureaucrat", 1);
		Form						*form;

		std::cout << "-------------------------------------------\n";
		std::cout << "looking for mercy\n";
		std::cout << "-------------------------------------------\n";
		form = intern.makeForm("presidential pardon", "criminal");
		bureaucrat.signForm(form);
		bureaucrat.executeForm(*form);
		delete form;
	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}
}