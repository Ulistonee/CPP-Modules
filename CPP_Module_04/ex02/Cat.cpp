#include "Cat.hpp"


// methods

void 	Cat::makeSound() const{
	std::cout << "Meow-meow!\n";
}

Brain *Cat::getBrain() const {
	return m_brain;
}

void Cat::setMBrain(Brain *mBrain)
{
	m_brain = mBrain;
}

// constructors and destructors

Cat::Cat(){
	m_brain = new Brain();
	m_type = "Cat";
	std::cout << "default Cat constructor for " << this->m_type << " is called\n";
}

Cat::Cat(const Cat &other) : Animal(other) {
	this->m_brain = new Brain();
	std::cout << "copy Cat constructor for " << this->m_type << " is called\n";
}

Cat::~Cat() {
	delete m_brain;
	std::cout << "default Cat destructor for " << this->m_type << " is called\n";
}

Cat		&Cat::operator=(const Cat &other) {
	std::cout << "Cat assignation operator for " << this->m_type << " is called\n";
	this->m_type = other.m_type;
	delete this->m_brain;
	this->m_brain = other.m_brain;
	return (*this);
}

