#include "Intern.hpp"

Intern::Intern() {};

Intern::~Intern() {};

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
			RobotomyRequest,
			PresidentialPardon,
			ShrubberyCreation
	};
	std::cout << "Intern creates " << form_name << std::endl;
	while(form_name != forms[i] && i < 3)
		i++;
	switch (i)
	{
		case 0: return pForm[i](target_name);
		case 1: return pForm[i](target_name);
		case 2: return pForm[i](target_name);
		default:
			throw Intern::InternException();
	}
}

const char *Intern::InternException::what() const throw()
{
	return ("Unknown form\n");
}