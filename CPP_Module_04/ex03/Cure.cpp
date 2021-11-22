#include "Cure.hpp"

Cure::Cure()
{
	this->type = "cure";
	std::cout << "default Cure constructor for " << this->type << " is called\n";
}

Cure::Cure(const Cure &other)  : AMateria(other) {
	std::cout << "parameter Cure constructor for " << this->type << " is called\n";
	this->type = other.type;
}

Cure::~Cure() {
	std::cout << "Cure destructor for " << this->type << " is called\n";
}

Cure			&Cure::operator=(const Cure &other) {
	this->type = other.type;
	return (*this);
}

// methods

AMateria*		Cure::clone() const {
	AMateria* clone = new Cure();
	return clone;
}

void 			Cure::use(ICharacter &target) {
	std::cout << this->type << "* shoots an Cure bolt at " << target.getName() << "*" << std::endl;
}



