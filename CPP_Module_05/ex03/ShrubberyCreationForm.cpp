#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyForm", 145,137), target("target") {
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &m_target) : Form("ShrubberyForm", 145,137), target(m_target){
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other){
	this->sign = other.sign;
	this->target = other.target;
}

ShrubberyCreationForm		&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other){
	this->sign = other.sign;
	this->target = other.target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void						ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
	if (this->sign && executor.getGrade() <= this->gradeToExecute)
	{
		std::cout << executor.getName() << " executes form\n";
		std::ofstream outf(target + "_shrubbery");
		if (!outf)
		{
			std::cout << "Error with output file\n";
		}
		std::string 	tree;
		tree = "\n"
			   "◯◯◯◯◯◯◯◯◯◯◯◯◯◯◯◯\n"
			   "◯◯◯◯◯◯◯◯◯◯◯◯◯◯◯◯\n"
			   "┈◯◯╰┻◯◯╋◯┻◯◯╯◯╯┈\n"
			   "┈┈╰━┓╰━┋┗━╯┣━╯┈┈\n"
			   "╱╲┈┈╰━┓┆┏┳━╯┈┈╱╲\n"
			   "┈┈╱╲┈┈┃┋┋┃┈┈┈╱┈┈\n"
			   "━━━━━━┻┻┻┻━━━━━━\n"
			   "\n";
		std::cout << "the shrubbery has been created\n";
		outf << tree;
		outf.close();
	}
	else if (!this->sign)
	{
		std::cout << "no signature!\n";
		throw ShrubberyCreationForm::FormNotSignedException();
	}
	else
	{
		throw ShrubberyCreationForm::GradeTooLowException();
	}
}

std::ostream &	operator<<(std::ostream & o, ShrubberyCreationForm const & form) {
	o << "form`s name is " << form.getName() << std::endl;
	o << "form`s status is " << form.getSign() << std::endl;
	o << "form`s gradeToSign is " <<  form.getGradeToSign() << std::endl;
	o << "form`s gradeToExecute is " << form.getGradeToExecute() << std::endl;
	return o;
}

