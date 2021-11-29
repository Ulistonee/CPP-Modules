#ifndef FORM_H
#define FORM_H
# include <iostream>
# include <fstream>
# include <string>
# include <cstdlib>
# include <cstdio>
# include <cmath>
# include <cstdio>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
public:

	Form();
	Form(const std::string& name, unsigned int gradeForSign, unsigned int gradeForExec);
	Form(const Form & other);
	virtual ~Form();
	Form &operator=(const Form & other);

	virtual bool 			getSign() const;
	virtual unsigned int 	getGradeToSign() const;
	virtual unsigned int 	getGradeToExecute() const;
	virtual std::string 	getName() const;
	virtual void 			beSigned(const Bureaucrat& bureaucrat);
	virtual void 			execute(Bureaucrat const & executor) const = 0;


protected:
	class	GradeTooHighException : public std::exception
	{
		virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		virtual const char* what() const throw();
	};
	class FormSignedException : public std::exception
	{
		virtual const char* what() const throw();
	};
	class FormNotSignedException : public std::exception
	{
		virtual const char* what() const throw();
	};

	const std::string 	m_name;
	bool 				sign;
	const unsigned int	gradeToSign;
	const unsigned int	gradeToExecute;
};

std::ostream &	operator<<(std::ostream & o, Form const & form);

#endif