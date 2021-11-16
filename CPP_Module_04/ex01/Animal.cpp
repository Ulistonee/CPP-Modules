#include "Animal.hpp"

Animal::Animal() : m_type("Default"){
	std::cout << "default Animal constructor for " << this->m_type << " is called\n";
}


Animal		&Animal::operator=(const Animal &other) {
	std::cout << "Animal assignation operator for " << this->m_type << " is called\n";
	this->m_type = other.m_type;
	return (*this);
}

Animal::Animal(const Animal &other) {
	std::cout << "copy Animal constructor for " << this->m_type << " is called\n";
	*this = other;
}

Animal::~Animal() {
	std::cout << "default Animal destructor for " << this->m_type << " is called\n";
}


// methods

std::string 		Animal::getType() const{
	return (m_type);
}

void Animal::setType(const std::string &mType) {
	m_type = mType;
}

void Animal::makeSound() const {
	std::cout << "Make some sound\n";
}