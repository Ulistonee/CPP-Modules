#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25,5), target("target") {
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &m_target) : Form("PresidentialPardonForm", 25,5), target(m_target) {
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other){
	this->sign = other.sign;
	this->target = other.target;
}

PresidentialPardonForm		&PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
	this->sign = other.sign;
	this->target = other.target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void						PresidentialPardonForm::execute(Bureaucrat const & executor) const{
	if (this->sign && executor.getGrade() <= this->gradeToExecute)
	{
		std::cout << executor.getName() << " executes form\n";
		std::cout << target << " has been pardoned by Zafod Beeblebrox\n";
	}
	else if (!this->sign)
	{
		std::cout << "no signature!\n";
		throw PresidentialPardonForm::FormNotSignedException();
	}
	else
	{
		throw PresidentialPardonForm::GradeTooLowException();
	}
}

std::ostream &	operator<<(std::ostream & o, PresidentialPardonForm const & form) {
	o << "form`s name is " << form.getName() << std::endl;
	o << "form`s status is " << form.getSign() << std::endl;
	o << "form`s gradeToSign is " <<  form.getGradeToSign() << std::endl;
	o << "form`s gradeToExecute is " << form.getGradeToExecute() << std::endl;
	return o;
}