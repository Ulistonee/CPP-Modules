#include "Ice.hpp"

Ice::Ice()
{
	this->type = "ice";
	std::cout << "default Ice constructor for " << this->type << " is called\n";
}

Ice::Ice(const Ice &other)  : AMateria(other) {
	std::cout << "parameter Ice constructor for " << this->type << " is called\n";
	this->type = other.type;
}

Ice::~Ice() {
	std::cout << "Ice destructor for " << this->type << " is called\n";
}

Ice			&Ice::operator=(const Ice &other) {
	this->type = other.type;
	return (*this);
}

// methods

AMateria*		Ice::clone() const {
	AMateria* clone = new Ice();
	return clone;
}

void 			Ice::use(ICharacter &target) {
	std::cout << this->type << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
}



