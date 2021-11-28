#include "Intern.hpp"

Form* Intern::PresidentialPardon(std::string target) {
	return new PresidentialPardonForm(target);
}

Form* Intern::RobotomyRequest(std::string target) {
	return new RobotomyRequestForm(target);
}

Form* Intern::ShrubberyCreation(std::string target) {
	return new ShrubberyCreationForm(target);
}


Form		*Intern::makeForm(const std::string& form_name, std::string target_name) {
	int i = 0;
	std::string forms[3] = {"robotomy request",
					   "presidential pardon",
					   "shrubbery creation"};

	Form* (*pForm[3])(std::string target) = {
			PresidentialPardon,
			RobotomyRequest,
			ShrubberyCreation
	};
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