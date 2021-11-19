#include "Ice.hpp"

Ice::Ice()
{
	this->type = "ice";
	std::cout << "default Ice constructor for " << this->type << " is called\n";
}

Ice::Ice(const std::string &type) {
	std::cout << "parameter Ice constructor for " << this->type << " is called\n";
	this->type = type;
}

Ice::Ice(const Ice &other){
	*this = other;
}

Ice::~Ice() {
	std::cout << "Ice destructor for " << this->type << " is called\n";
}

Ice			&Ice::operator=(const Ice &other) {
	this->type = other.type;
	return (*this);
}

AMateria*		Ice::clone() const {
	AMateria* clone = new Ice(type);
	return clone;
}

void 			Ice::use(ICharacter &target) {
	std::cout << this->type << " shoots an ice bolt at " << target.getName() << std::endl;
}



