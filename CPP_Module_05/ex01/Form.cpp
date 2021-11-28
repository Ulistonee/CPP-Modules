#include "Form.hpp"

Form::Form() : m_name("form"), sign(false), gradeToSign(1), gradeToExecute(1)
{
}

Form::Form(const std::string& name, unsigned int gradeForSign,
		   unsigned int gradeForExec) : m_name(name), sign(false), gradeToSign(gradeForSign), gradeToExecute(gradeForExec){
	if (gradeForSign < 1 || gradeForExec < 1)
	{
		std::cout << "the form has not been created\n";
		throw Form::GradeTooHighException();
	}
	if (gradeForSign > 150 || gradeForExec > 150)
	{
		std::cout << "the form has not been created\n";
		throw Form::GradeTooLowException();
	}
}

Form::Form(const Form & other) : m_name(other.m_name), sign(other.sign), gradeToSign(0), gradeToExecute(0)
{
	*this = other;
}

Form &Form::operator=(const Form &other) {
	this->sign = other.sign;
	return (*this);
}

Form::~Form() {}

const char *Form::GradeTooHighException::what() const throw() {
	return ("Grade is too high\n");
}

const char *Form::GradeTooLowException::what() const throw() {
	return ("Grade is too low\n");
}
const char *Form::FormSignedException::what() const throw() {
	return ("the form has already been signed\n");
}

std::string		Form::getName() const{
	return (this->m_name);
}

bool 			Form::getSign() const {
	return (this->sign);
}

unsigned int 	Form::getGradeToSign() const {
	return (this->gradeToSign);
}

unsigned int 	Form::getGradeToExecute() const {
	return (this->gradeToExecute);
}

void 			Form::beSigned(const Bureaucrat& bureaucrat) {
	if (bureaucrat.getGrade() <= this->getGradeToSign() && !this->sign)
	{
		this->sign = true;
		std::cout << "the form has been signed by " << bureaucrat.getName() << std::endl;
	}
	else if (bureaucrat.getGrade() > this->getGradeToSign())
	{
		std::cout << bureaucrat.getName() << " cannot sign " << this->m_name << " because his grade is too low\n";
		throw Form::GradeTooLowException();
	}
	else if (this->sign)
	{
		throw Form::FormSignedException();
	}
}

std::ostream &	operator<<(std::ostream & o, Form const & form) {
	o << "form`s name is " << form.getName() << std::endl;
	o << "form`s status is " << form.getSign() << std::endl;
	o << "form`s gradeToSign is " <<  form.getGradeToSign() << std::endl;
	o << "form`s gradeToExecute is " << form.getGradeToExecute() << std::endl;
	return o;
}