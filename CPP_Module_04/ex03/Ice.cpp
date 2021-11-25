#include "Ice.hpp"

Ice::Ice()
{
	this->type = "ice";
	std::cout << "default Ice constructor for " << this->type << this << " is called\n";
}

Ice::Ice(const Ice &){
	std::cout << "copy Ice constructor for " << this->type << " is called\n";
}

Ice::~Ice() {
	std::cout << "Ice destructor for " << this->type << " is called\n";
}

Ice			&Ice::operator=(const Ice &) {
	return (*this);
}

// methods

AMateria*		Ice::clone() const {
	AMateria* clone = new Ice();
	return clone;
}

void 			Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}



