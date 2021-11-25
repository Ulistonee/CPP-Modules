#ifndef GRADETOOHIGHEXCEPTION_H
#define GRADETOOHIGHEXCEPTION_H
# include <iostream>
# include <fstream>
# include <string>
# include <cstdlib>
# include <cstdio>
# include <cmath>
# include <cstdio>

class GradeTooHighException : public std::exception
{
private:
	std::string 		m_error;
public:
	GradeTooHighException();
	const char 		*what() const;
};

#endif