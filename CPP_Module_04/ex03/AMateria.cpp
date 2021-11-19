#include "AMateria.hpp"

AMateria::AMateria() : type("Default"){
}

AMateria::AMateria(const std::string &type) {
	std::cout << "copy AMateria constructor for " << this->type << " is called\n";
	this->type = type;
}

AMateria::~AMateria() {
	std::cout << "AMateria destructor for " << this->type << " is called\n";
}

AMateria &AMateria::operator=(const std::string &type) {
	std::cout << "assignation AMateria operator for " << this->type << " is called\n";

}

// methods

std::string const &	AMateria::getType() const {
	return (this->type);
}

void AMateria::use(ICharacter &target)
{
	std::cout << "does something\n";
}