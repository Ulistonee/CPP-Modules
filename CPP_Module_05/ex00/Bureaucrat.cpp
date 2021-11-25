#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(int value) : name("bureaucrat"){
	if (value < 1)
		throw Bureaucrat::gradeTooHighException;
	else if (value > 150)
		throw Bureaucrat::gradeTooLowException;
	this->grade = value;
}

std::string Bureaucrat::getName() const{
	return (this->name);
}

int Bureaucrat::getGrade() const{
	return (this->grade);
}

void Bureaucrat::incrementGrade(){
	try
	{
		Bureaucrat(this->grade--);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

void Bureaucrat::decrementGrade(){
	try
	{
		Bureaucrat(this->grade++);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & bureaucrat) {
	o << "bureaucrat`s name is " << bureaucrat.getName() << std::endl;
	o << "bureaucrat`s grade is " << bureaucrat.getGrade() << std::endl;
	return o;
}