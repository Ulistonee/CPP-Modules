#include "Form.hpp"

class RobotomyRequestForm : public Form
{
public:
	RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm &other);
	~RobotomyRequestForm();
	RobotomyRequestForm	 &operator=(const RobotomyRequestForm &other);
	void 					execute(std::string target_name);

private:
	std::string 		target;
};