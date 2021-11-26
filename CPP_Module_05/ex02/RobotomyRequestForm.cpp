#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : target("default"), Form("form", false, 72,45){
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : target(other.target), Form(other.getName(), other.sign, other.gradeToSign,other.gradeToExecute) {
}

RobotomyRequestForm		&RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
	this->target = other.target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void						RobotomyRequestForm::execute(std::string target_name) {
	std::cout << target_name << " "
}