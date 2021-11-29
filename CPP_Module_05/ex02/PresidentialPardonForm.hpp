#ifndef PRESIDENTIAL_PARDON_FORM_H
#define PRESIDENTIAL_PARDON_FORM_H

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string const &m_target);
	~PresidentialPardonForm();
	virtual void 					execute(Bureaucrat const & executor) const;

public:
	PresidentialPardonForm(const PresidentialPardonForm &other);
	PresidentialPardonForm	 &operator=(const PresidentialPardonForm &other);

	std::string 			target;
};

#endif

std::ostream &	operator<<(std::ostream & o, PresidentialPardonForm const & form);