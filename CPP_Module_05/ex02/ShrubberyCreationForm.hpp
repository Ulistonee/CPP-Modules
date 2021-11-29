#ifndef SHRUBBERY_CREATION_FORM_H
#define SHRUBBERY_CREATION_FORM_H

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string const &m_target);
	~ShrubberyCreationForm();

	virtual void 			execute(Bureaucrat const & executor) const;

private:
	ShrubberyCreationForm(const ShrubberyCreationForm &other);
	ShrubberyCreationForm	 &operator=(const ShrubberyCreationForm &other);

	std::string 			target;
};

#endif

std::ostream &	operator<<(std::ostream & o, ShrubberyCreationForm const & form);