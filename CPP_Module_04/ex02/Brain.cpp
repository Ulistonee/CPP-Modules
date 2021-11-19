#include "Brain.hpp"

// methods

std::string Brain::getRandomIdea()
{
	std::string		oneIdea;
	static int	ra = 1;
	char		symb[] = "qwertyuiopasdfghjklzxcvbnm1234567890";

	std::srand(ra++);
	for (int i = 0; i < 11; i++)
		oneIdea += symb[rand() % (sizeof(symb) - 1)];
	return oneIdea;
}

void Brain::printIdeas() const
{
	for (int i = 0; i < ideas_size; i++)
		std::cout << m_ideas[i] << std::endl;
}

const std::string *Brain::getIdeas() const {
	return m_ideas;
}

// constructors and destructors

Brain::Brain(){
	for (int i = 0; i < ideas_size; ++i) {
		m_ideas[i] = getRandomIdea();
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

