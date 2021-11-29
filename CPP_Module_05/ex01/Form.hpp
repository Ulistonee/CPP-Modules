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
	~Form();
	Form &operator=(const Form & other);

	bool 			getSign() const;
	unsigned int 	getGradeToSign() const;
	unsigned int 	getGradeToExecute() const;
	std::string 	getName() const;
	void 			beSigned(const Bureaucrat& bureaucrat);


private:
	class	GradeTooHighException : public std::exception
	{
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		const char* what() const throw();
	};
	class FormSignedException : public std::exception
	{
		const char* what() const throw();
	};
	class FormNotSignedException : public std::exception
	{
		const char* what() const throw();
	};

	const std::string 	m_name;
	bool 				sign;
	const unsigned int	gradeToSign;
	const unsigned int	gradeToExecute;
};

std::ostream &	operator<<(std::ostream & o, Form const & form);

#endif