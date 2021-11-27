#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("form", false, 25,5){
	this->target = "default";
}

PresidentialPardonForm::PresidentialPardonForm(std::string &m_target) : Form("form", false, 25,5){
	this->target = m_target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : Form(other.getName(), other.sign, other.gradeToSign,other.gradeToExecute) {
	this->target = other.target;
}

PresidentialPardonForm		&PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
	this->target = other.target;
	return (*this);
} // do I need to initalize other fields?

PresidentialPardonForm::~PresidentialPardonForm() {}

void						PresidentialPardonForm::execute(Bureaucrat const & executor) const{
	if (this->sign && executor.getGrade() <= this->gradeToExecute)
	{
		std::cout << target << " has been pardoned by Zafod Beeblebrox\n";
	}
	else
	{
		throw PresidentialPardonForm::GradeTooLowException();
	}
} // when do I need to work with try catch?
