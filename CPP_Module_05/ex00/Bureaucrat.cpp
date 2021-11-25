#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(int value) : name("bureaucrat"){
	if (value < 1 || value > 150)
	{
		throw std::exception();
	}
	this->grade = value;
}

std::string Bureaucrat::getName() const{
	return (this->name);
}

int Bureaucrat::getGrade() const{
	return (this->grade);
}

void Bureaucrat::GradeTooHighException() {
	this->grade--;
	if (this->grade < 0)
	{
		throw std::exception();
	}
}

void Bureaucrat::GradeTooLowException() {
	this->grade++;
	if (this->grade > 150)
	{
		throw std::exception();
	}
}

void Bureaucrat::incrementGrade(){
	try
	{
		GradeTooHighException();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

void Bureaucrat::decrementGrade(){
	try
	{
		GradeTooLowException();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & bureaucrat) {
	o << bureaucrat.getName() << std::endl;
	o << bureaucrat.getGrade() << std::endl;
	return o;
}