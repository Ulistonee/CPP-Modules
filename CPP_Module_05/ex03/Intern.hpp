#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Form;

class Intern
{
public:
	Intern() {};
	~Intern(){};
	Form 				*makeForm(const std::string& form_name, std::string target_name);
	static Form 		*PresidentialPardon(std::string target);
	static Form 		*RobotomyRequest(std::string target);
	static Form 		*ShrubberyCreation(std::string target);
	class InternException : public std::exception
	{
		virtual const char* what() const throw();
	};

private:
	Intern(const Intern& src);
	Intern& operator=(const Intern& src);
};