#include "Intern.hpp"

Form		*Intern::makeForm(const std::string& form_name, std::string target_name) {
	int i = 0;
	std::string forms[3] = {"robotomy request",
					   "presidential pardon",
					   "shrubbery creation"};

	std::cout << "Intern creates " << target_name << std::endl;
	while(form_name != forms[i] && i < 3)
		i++;

	switch (i)
	{
		case 0: return new RobotomyRequestForm(target_name);
		case 1: return new PresidentialPardonForm(target_name);
		case 2: return new ShrubberyCreationForm(target_name);
	}
	throw Intern::InternException();
}

Intern &Intern::operator=(const Intern &src)
{
	(void)src;
	return *this;
}

Intern::Intern(const Intern &src)
{
	*this = src;
}


const char *Intern::InternException::what() const throw()
{
	return ("Unknown form");
}