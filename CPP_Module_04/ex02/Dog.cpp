#include "Dog.hpp"

// methods

void 	Dog::makeSound() const {
	std::cout << "Woof-woof!\n";
}

// constructors and destructors

Dog::Dog(){
	this->m_type = "Dog";
	this->brain = new Brain();
	std::cout << "default Dog constructor for " << this->m_type << " is called\n";
}

Dog::Dog(const Dog &other) {
	this->m_type = other.m_type;
	this->brain = new Brain();
	std::cout << "copy Dog constructor for " << this->m_type << " is called\n";
}

Dog::~Dog() {
	if (this->brain)
		delete brain;
	std::cout << "default Dog destructor for " << this->m_type << " is called\n";
}

Dog		&Dog::operator=(const Dog &other) {
	std::cout << "Dog assignation operator for " << this->m_type << " is called\n";
	this->m_type = other.m_type;
	if (this->brain)
		delete brain;
	this->brain = other.brain;
	return (*this);
}