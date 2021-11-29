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

		std::cout << "-------------------------------------------\n";
		std::cout << "looking for mercy\n";
		std::cout << "-------------------------------------------\n";
		form = new PresidentialPardonForm("criminal");
		std::cout << *form << std::endl;
		bureaucrat.signForm(form);
		bureaucrat.executeForm(*form);
		delete form;
	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}
	try
	{
		Form						*form;
		Bureaucrat					bureaucrat("bureaucrat", 1);

		std::cout << "-------------------------------------------\n";
		std::cout << "trying to create some shrubbery\n";
		std::cout << "-------------------------------------------\n";
		form = new ShrubberyCreationForm("yard");
		std::cout << *form << std::endl;
		bureaucrat.signForm(form);
		bureaucrat.executeForm(*form);
		delete form;
	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}
	try
	{
		Form						*form;
		Bureaucrat					bureaucrat("bureaucrat", 1);


		std::cout << "-------------------------------------------\n";
		std::cout << "going through robotomy\n";
		std::cout << "-------------------------------------------\n";
		form = new RobotomyRequestForm("john");
		std::cout << *form << std::endl;
		bureaucrat.signForm(form);
		bureaucrat.executeForm(*form);
		delete form;
	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}
	try
	{
		Form						*form;
		Bureaucrat					bureaucrat("bureaucrat", 150);


		std::cout << "-------------------------------------------\n";
		std::cout << "trying too low grade\n";
		std::cout << "-------------------------------------------\n";
		form = new RobotomyRequestForm("john");
		std::cout << *form << std::endl;
		bureaucrat.signForm(form);
		bureaucrat.executeForm(*form);
		delete form;
	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}
	try
	{
		Form						*form;
		Bureaucrat					bureaucrat("bureaucrat", 1);


		std::cout << "-------------------------------------------\n";
		std::cout << "trying not signed form\n";
		std::cout << "-------------------------------------------\n";
		form = new RobotomyRequestForm("john");
		std::cout << *form << std::endl;
//		bureaucrat.signForm(form);
		bureaucrat.executeForm(*form);
		delete form;
	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}
	try
	{
		Form						*form;
		Bureaucrat					bureaucrat("bureaucrat", 1);


		std::cout << "-------------------------------------------\n";
		std::cout << "trying already signed form\n";
		std::cout << "-------------------------------------------\n";
		form = new RobotomyRequestForm("john");
		std::cout << *form << std::endl;
		bureaucrat.signForm(form);
		bureaucrat.signForm(form);
		delete form;
	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}
}