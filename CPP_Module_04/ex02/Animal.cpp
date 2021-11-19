#include "Animal.hpp"

// destructors and constructors

Animal::Animal() : m_type("Default"){
	std::cout << "default Animal constructor for " << this->m_type << " is called\n";
}

Animal::Animal(const Animal &other) {
//	m_type = "Default";
	std::cout << "copy Animal constructor for " << this->m_type << " is called\n";
	*this = other;
}

Animal		&Animal::operator=(const Animal &other) {
	std::cout << "Animal assignation operator for " << this->m_type << " is called\n";
	this->m_type = other.m_type;
	return (*this);
}

Animal::~Animal() {
	std::cout << "default Animal destructor for " << this->m_type << " is called\n";
}

// methods

std::string 		Animal::getType() const{
	return (m_type);
}

void Animal::setType(const std::string &type) {
	m_type = type;
}