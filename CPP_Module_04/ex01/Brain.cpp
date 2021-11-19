#include "Brain.hpp"

// methods

std::string 		Brain::getRandomIdea() {
	std::string				oneIdea;
	std::string 			ideas[] = {"Evrika!", "I have an idea!", "What if I create a robot?!", "Let' make some pasta!"};
	static unsigned int		i = 1;
	unsigned int 			k;

	std::srand(i++);
	k = std::rand() % 4;
	return (ideas[k]);
}

void Brain::printIdeas() const
{
	for (int i = 0; i < ideas_size; i++)
	{
		std::cout << m_ideas[i] << std::endl;
		if ((i + 1) % 3 == 0)
			std::cout << "\n";
	}
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

