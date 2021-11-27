#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string &m_target);
	ShrubberyCreationForm(const ShrubberyCreationForm &other);
	~ShrubberyCreationForm();
	ShrubberyCreationForm	 &operator=(const ShrubberyCreationForm &other);
	virtual void 			execute(Bureaucrat const & executor) const;
};