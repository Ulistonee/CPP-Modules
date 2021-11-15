#include "Brain.hpp"

// methods

std::string 	*Brain::getIdeas() const{
	return (m_ideas);
}

Brain::Brain(){
	for (int i = 0; i < ideas_size; ++i) {
		m_ideas[i] = '\0';
	}
	std::cout << "default Brain constructor for " << this->m_ideas << " is called\n";
}


Brain		&Brain::operator=(const Brain &other) {
	std::cout << "Brain assignation operator for " << this->m_ideas << " is called\n";
	for (int i = 0; i < ideas_size; i++) {
		this->m_ideas[i] = other.m_ideas[i];
	}
	return (*this);
}

Brain::Brain(const Brain &other) {
	std::cout << "copy Brain constructor for " << this->m_ideas << " is called\n";
	*this = other;
}

Brain::~Brain() {
	std::cout << "default Brain destructor for " << this->m_ideas << " is called\n";
}