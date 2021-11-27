#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("form", false, 145,137){
	this->target = "default";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string &m_target) : Form("form", false, 25,5){
	this->target = m_target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : Form(other.getName(), other.sign, other.gradeToSign,other.gradeToExecute) {
	this->target = other.target;
}

ShrubberyCreationForm		&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other){
	this->target = other.target;
	return (*this);
} // do  I need to initialize other fields?

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
	else
	{
		if (!this->sign)
		{
			throw ShrubberyCreationForm::notSigned();
		}
		else
		{
			throw ShrubberyCreationForm::GradeTooLowException();
		}
	}

}

