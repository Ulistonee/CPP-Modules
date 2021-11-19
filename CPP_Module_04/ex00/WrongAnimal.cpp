#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : m_type("Default"){
	std::cout << "default WrongAnimal constructor for " << this->m_type << " is called\n";
}


WrongAnimal		&WrongAnimal::operator=(const WrongAnimal &other) {
	std::cout << "WrongAnimal assignation operator for " << this->m_type << " is called\n";
	this->m_type = other.m_type;
	return (*this);
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {
	std::cout << "copy WrongAnimal constructor for " << this->m_type << " is called\n";
	*this = other;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "default WrongAnimal destructor for " << this->m_type << " is called\n";
}


// methods

std::string 		WrongAnimal::getType() const{
	return (m_type);
}

void				WrongAnimal::makeSound() const{
	std::cout << "Makes some sound\n";
}
