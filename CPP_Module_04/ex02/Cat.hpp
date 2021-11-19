#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
public:
	Cat();
	Cat(const Cat &other);
	~Cat();
	Cat	&operator=(const Cat &other);

	void setMBrain(Brain *mBrain);

	void 	makeSound() const;
	Brain	*getBrain() const;

private:
	Brain 			*m_brain;
};