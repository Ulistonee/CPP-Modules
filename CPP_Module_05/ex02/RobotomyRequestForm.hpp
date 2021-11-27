#include "Form.hpp"

class RobotomyRequestForm : public Form
{
public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string &m_target);
	RobotomyRequestForm(const RobotomyRequestForm &other);
	~RobotomyRequestForm();
	RobotomyRequestForm	 &operator=(const RobotomyRequestForm &other);
	virtual void 					execute(Bureaucrat const & executor) const;
};