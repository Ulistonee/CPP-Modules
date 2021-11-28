#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string &m_target);
	~ShrubberyCreationForm();

	virtual void 			execute(Bureaucrat const & executor) const; // do I need to leave virtual?

private:
	ShrubberyCreationForm(const ShrubberyCreationForm &other);
	ShrubberyCreationForm	 &operator=(const ShrubberyCreationForm &other);
};

std::ostream &	operator<<(std::ostream & o, ShrubberyCreationForm const & form);