#include "Animal.hpp"
#include "Brain.hpp"


class Dog : public Animal{
public:
	Dog();
	Dog(const Dog &other);
	~Dog();
	Dog	&operator=(const Dog &other);
	void 	makeSound() const;
	const Brain *getMBrain() const;

private:
	const Brain 			*m_brain;
};