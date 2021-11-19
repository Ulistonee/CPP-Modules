#include "Dog.hpp"


// methods

void 	Dog::makeSound() const {
	std::cout << "Woof-woof!\n";
}

const Brain *Dog::getBrain() const {
	return m_brain;
}

// constructors and destructors

Dog::Dog(){
	this->m_type = "Dog";
	this->m_brain = new Brain();
	std::cout << "default Dog constructor for " << this->m_type << " is called\n";
}

Dog::Dog(const Dog &other) : Animal(other) {
	this->m_brain = new Brain();
	std::cout << "copy Dog constructor for " << this->m_type << " is called\n";
}

Dog::~Dog() {
	delete m_brain;
	std::cout << "default Dog destructor for " << this->m_type << " is called\n";
}

Dog		&Dog::operator=(const Dog &other) {
	std::cout << "Dog assignation operator for " << this->m_type << " is called\n";
	this->m_type = other.m_type;
	delete this->m_brain;
	this->m_brain = other.m_brain;
	return (*this);
}

