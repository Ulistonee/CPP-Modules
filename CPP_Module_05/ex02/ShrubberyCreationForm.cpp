#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : target("default"), Form("form", false, 145,137){
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : target(other.target), Form(other.getName(), other.sign, other.gradeToSign,other.gradeToExecute) {
}

ShrubberyCreationForm		&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
	this->target = other.target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void						ShrubberyCreationForm::execute(std::string target_name) {
	std::ofstream outf(target_name + "_shrubbery");
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

