#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("bureaucrat"), grade(1){}

Bureaucrat::Bureaucrat(const std::string& m_name, unsigned int value) : name(m_name){
	if (value < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (value > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = value;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) {
	this->grade = other.grade;
}

Bureaucrat::~Bureaucrat() {}

void Bureaucrat::signForm(Form &form) {
	form.beSigned(*this);
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
	this->grade = other.grade;
	return (*this);
}

std::string Bureaucrat::getName() const{
	return (this->name);
}

unsigned int Bureaucrat::getGrade() const{
	return (this->grade);
}

void Bureaucrat::incrementGrade(){
	if (this->grade - 1 <= 0)
		throw Bureaucrat::GradeTooHighException();
	this->grade--;
}

void Bureaucrat::decrementGrade(){
	if (this->grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade++;
}

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & bureaucrat) {
	o << "bureaucrat`s name is " << bureaucrat.getName() << std::endl;
	o << "bureaucrat`s grade is " << bureaucrat.getGrade() << std::endl;
	return o;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high\n");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low\n");
}