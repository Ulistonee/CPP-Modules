#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
# include <iostream>
# include <fstream>
# include <string>
# include <cstdlib>
# include <cstdio>
# include <cmath>
# include <cstdio>
# include <stdexcept>


class Bureaucrat
{
public:
	Bureaucrat();
	Bureaucrat(const std::string& m_name, unsigned int value);
	~Bureaucrat();

	std::string 		getName() const;
	unsigned int		getGrade() const;
	void 				incrementGrade();
	void 				decrementGrade();

private:
	class	GradeTooHighException : public std::exception
	{
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		const char* what() const throw();
	};
	Bureaucrat(const Bureaucrat & other);
	Bureaucrat &operator=(const Bureaucrat & other);
	const std::string 		name;
	unsigned int			grade;
};

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & bureaucrat);

#endif