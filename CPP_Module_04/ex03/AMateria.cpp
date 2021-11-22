#include "AMateria.hpp"

AMateria::AMateria() : type("Default"){
}

AMateria::AMateria(const AMateria &other) {
	std::cout << "copy AMateria constructor for " << this->type << " is called\n";
	this->type = other.type;
}

AMateria::AMateria(std::string const & type) {
	std::cout << "parameter AMateria constructor for " << this->type << " is called\n";
	this->type = type;
}

AMateria::~AMateria() {
	std::cout << "AMateria destructor for " << this->type << " is called\n";
}

AMateria &AMateria::operator=(const AMateria &other) {
	std::cout << "assignation AMateria operator for " << this->type << " is called\n";
	this->type = other.type;
	return (*this);

}

// methods

std::string const &	AMateria::getType() const {
	return (this->type);
}

void AMateria::use(ICharacter &target)
{
	std::cout << "does something\n";
}