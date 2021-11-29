#ifndef ROBOTOMY_REQUEST_FORM_H
#define ROBOTOMY_REQUEST_FORM_H

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string const &m_target);
	~RobotomyRequestForm();
	virtual void 				execute(Bureaucrat const & executor) const;

private:
	RobotomyRequestForm(const RobotomyRequestForm &other);
	RobotomyRequestForm	 &operator=(const RobotomyRequestForm &other);

	std::string 			target;
};

#endif

std::ostream &	operator<<(std::ostream & o, RobotomyRequestForm const & form);