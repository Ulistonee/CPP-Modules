#include "Cure.hpp"

Cure::Cure()
{
	this->type = "Cure";
	std::cout << "default Cure constructor for " << this->type << " is called\n";
}

Cure::Cure(const std::string &type) {
	std::cout << "parameter Cure constructor for " << this->type << " is called\n";
	this->type = type;
}

Cure::Cure(const Cure &other){
	*this = other;
}

Cure::~Cure() {
	std::cout << "Cure destructor for " << this->type << " is called\n";
}

Cure			&Cure::operator=(const Cure &other) {
	this->type = other.type;
	return (*this);
}

AMateria*		Cure::clone() const {
	AMateria* clone = new Cure(type);
	return clone;
}

void 			Cure::use(ICharacter &target) {
	std::cout << this->type << " heals " << target.getName() << "`s " << std::endl;
}



