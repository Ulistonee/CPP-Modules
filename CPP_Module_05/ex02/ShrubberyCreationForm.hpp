#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm &other);
	~ShrubberyCreationForm();
	ShrubberyCreationForm	 &operator=(const ShrubberyCreationForm &other);
	void 					execute(std::string target_name);

private:
	std::string 		target;
};