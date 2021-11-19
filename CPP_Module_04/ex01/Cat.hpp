#include "Animal.hpp"
#include "Brain.hpp"
#define SIZE 4

class Cat : public Animal{
public:
	Cat();
	Cat(const Cat &other);
	~Cat();
	Cat	&operator=(const Cat &other);


	void 	makeSound() const;

private:
	Brain			*brain;
};