#include "GradeTooLowException.hpp"

GradeTooHighException::GradeTooLowException(std::string error) : m_error(error){
}

const char *GradeTooLowException::what() const {
	return (m_error.c_str();)
}



