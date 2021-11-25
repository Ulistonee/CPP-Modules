#include "Bureaucrat.hpp"

class GradeTooLowException : public std::exception
{
private:
	std::string 		m_error;
public:
	GradeTooLowException();
	const char 		*what() const;
};