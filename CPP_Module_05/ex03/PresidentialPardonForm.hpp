#include "Form.hpp"

class PresidentialPardonForm : public Form
{
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string &m_target);
	~PresidentialPardonForm();
	virtual void 					execute(Bureaucrat const & executor) const;

public:
	PresidentialPardonForm(const PresidentialPardonForm &other);
	PresidentialPardonForm	 &operator=(const PresidentialPardonForm &other);
};

std::ostream &	operator<<(std::ostream & o, PresidentialPardonForm const & form);