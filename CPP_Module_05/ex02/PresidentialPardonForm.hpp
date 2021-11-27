#include "Form.hpp"

class PresidentialPardonForm : public Form
{
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string &m_target);
	PresidentialPardonForm(const PresidentialPardonForm &other);
	~PresidentialPardonForm();
	PresidentialPardonForm	 &operator=(const PresidentialPardonForm &other);
	virtual void 					execute(Bureaucrat const & executor) const;
};