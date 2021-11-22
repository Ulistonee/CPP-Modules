#include "Cure.hpp"

Cure::Cure()
{
	this->type = "cure";
	std::cout << "default Cure constructor for " << this->type << this << " is called\n";
}

Cure::Cure(const Cure &){
	std::cout << "copy Cure constructor for " << this->type << " is called\n";
}

Cure::~Cure() {
	std::cout << "Cure destructor for " << this->type << " is called\n";
}

Cure			&Cure::operator=(const Cure &) {
	std::cout << "Cure assignation operator for " << this->type << " is called\n";
	return (*this);
}

// methods

AMateria*		Cure::clone() const {
	AMateria* clone = new Cure();
	return clone;
}

void 			Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}



