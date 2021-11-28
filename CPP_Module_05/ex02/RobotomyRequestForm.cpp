#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72,45){
	this->target = "default";
}

RobotomyRequestForm::RobotomyRequestForm(std::string &m_target) : Form("RobotomyRequestForm", 72,45){
	this->target = m_target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) {
	this->sign = other.sign;
	this->target = other.target;
}

RobotomyRequestForm		&RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
	this->sign = other.sign;
	this->target = other.target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void						RobotomyRequestForm::execute(Bureaucrat const & executor) const{
	if (this->sign && executor.getGrade() <= this->gradeToExecute)
	{
		std::cout << target << " is making drilling noises\n";
		std::cout << target << " has been robotomized succesfully 50% of the time\n";
	}
	else if (!this->sign)
	{
		throw RobotomyRequestForm::FormSignedException();
	}
	else
	{
		throw RobotomyRequestForm::GradeTooLowException();
	}
}

std::ostream &	operator<<(std::ostream & o, RobotomyRequestForm const & form) {
	o << "form`s name is " << form.getName() << std::endl;
	o << "form`s status is " << form.getSign() << std::endl;
	o << "form`s gradeToSign is " <<  form.getGradeToSign() << std::endl;
	o << "form`s gradeToExecute is " << form.getGradeToExecute() << std::endl;
	return o;
}
