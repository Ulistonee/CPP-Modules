#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
# include <iostream>
# include <fstream>
# include <string>
# include <cstdlib>
# include <cstdio>
# include <cmath>
# include <cstdio>
# include "GradeTooHighException.hpp"
# include "GradeTooLowException.hpp"

class Bureaucrat
{
public:
	Bureaucrat(int value);


	std::string 		getName() const;
	int 				getGrade() const;
	void 				incrementGrade();
	void 				decrementGrade();

private:
	GradeTooHighException	gradeTooHighException;
	GradeTooLowException	gradeTooLowException;
	const std::string 		name;
	int						grade;
};

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & bureaucrat);

#endif