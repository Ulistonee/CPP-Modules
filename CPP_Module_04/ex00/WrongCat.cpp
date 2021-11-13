#include "WrongCat.hpp"

WrongCat::WrongCat(){
	m_type = "WrongCat";
	std::cout << "default WrongCat constructor for " << this->m_type << " is called\n";
}

WrongCat::WrongCat(const WrongCat &other) {
	std::cout << "copy WrongCat constructor for " << this->m_type << " is called\n";
	*this = other;
}

WrongCat::~WrongCat() {
	std::cout << "default WrongCat destructor for " << this->m_type << " is called\n";
}

WrongCat		&WrongCat::operator=(const WrongCat &other) {
	std::cout << "WrongCat assignation operator for " << this->m_type << " is called\n";
	this->m_type = other.m_type;
	return (*this);
}

void 	WrongCat::makeSound() const{
	std::cout << "Meow-meow!\n";
}