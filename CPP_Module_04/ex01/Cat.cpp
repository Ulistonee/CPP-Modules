#include "Cat.hpp"

// methods

void 	Cat::makeSound() const {
	std::cout << "Meow-meow!\n";
}

// constructors and destructors

Cat::Cat(){
	this->m_type = "Cat";
	this->brain = new Brain();
	std::cout << "default Cat constructor for " << this->m_type << " is called\n";
}

Cat::Cat(const Cat &other) {
	this->m_type = other.m_type;
	this->brain = new Brain();
	std::cout << "copy Cat constructor for " << this->m_type << " is called\n";
}

Cat::~Cat() {
	if (this->brain)
		delete brain;
	std::cout << "default Cat destructor for " << this->m_type << " is called\n";
}

Cat		&Cat::operator=(const Cat &other) {
	std::cout << "Cat assignation operator for " << this->m_type << " is called\n";
	this->m_type = other.m_type;
	if (this->brain)
		delete brain;
	this->brain = other.brain;
	return (*this);
}