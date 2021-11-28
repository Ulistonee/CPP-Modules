#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyForm", 145,137){
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string &m_target) : Form("ShrubberyForm", 145,137){
	this->target = m_target;
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
		std::ofstream outf(target + "_shrubbery");
		if (!outf)
		{
			std::cout << "Error with output file\n";
		}
		std::string 	tree;
		tree = ".\n"
			   "◯◯◯◯◯◯◯◯◯◯◯◯◯◯◯◯\n"
			   "◯◯◯◯◯◯◯◯◯◯◯◯◯◯◯◯\n"
			   "┈◯◯╰┻◯◯╋◯┻◯◯╯◯╯┈\n"
			   "┈┈╰━┓╰━┋┗━╯┣━╯┈┈\n"
			   "╱╲┈┈╰━┓┆┏┳━╯┈┈╱╲\n"
			   "┈┈╱╲┈┈┃┋┋┃┈┈┈╱┈┈\n"
			   "━━━━━━┻┻┻┻━━━━━━\n"
			   "\n";
		outf << tree;
		outf.close();
	}
	else if (!this->sign)
	{
		std::cout << "the form has not been signed yet\n";
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

