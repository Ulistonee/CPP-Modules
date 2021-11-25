#include "Form.hpp"

Form::Form() : m_name("form"), sign(false), gradeToSign(1), gradeToExecute(1)
{
}

Form::Form(const std::string& name, bool status, unsigned int gradeForSign,
		   unsigned int gradeForExec) : m_name(name), sign(status), gradeToSign(gradeForSign), gradeToExecute(gradeForExec){
	if (gradeForSign < 1 || gradeForExec < 1)
		throw Form::GradeTooLowException();
	if (gradeForSign > 150 || gradeForExec > 150)
		throw Form::GradeTooHighException();
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

std::ostream &	operator<<(std::ostream & o, Form const & form) {
	o << "form`s name is " << form.getName() << std::endl;
	o << "form`s status is " << form.getSign() << std::endl;
	o << "form`s gradeToSign is " <<  form.getGradeToSign() << std::endl;
	o << "form`s gradeToExecute is " << form.getGradeToExecute() << std::endl;
	return o;
}