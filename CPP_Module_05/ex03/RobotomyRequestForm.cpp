#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("form", false, 72,45){
	this->target = "default";
}

RobotomyRequestForm::RobotomyRequestForm(std::string &m_target) : Form("form", false, 25,5){
	this->target = m_target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : Form(other.getName(), other.sign, other.gradeToSign,other.gradeToExecute) {
	this->target = other.target;
}

RobotomyRequestForm		&RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
	this->target = other.target;
	return (*this);
} // do I need to initalize other fields?

RobotomyRequestForm::~RobotomyRequestForm() {}

void						RobotomyRequestForm::execute(Bureaucrat const & executor) const{
	if (this->sign && executor.getGrade() <= this->gradeToExecute)
	{
		std::cout << target << " is making drilling noises\n";
		std::cout << target << " has been robotomized succesfully 50% of the time\n";
	}
	else
	{
		throw RobotomyRequestForm::GradeTooLowException();
	}
} // when do I need to work with try catch?
