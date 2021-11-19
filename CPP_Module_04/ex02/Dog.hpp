#include "Animal.hpp"
#include "Brain.hpp"
#define SIZE 4

class Dog : public Animal{
public:
	Dog();
	Dog(const Dog &other);
	~Dog();
	Dog	&operator=(const Dog &other);

	void 	makeSound() const;

private:
	Brain			*brain;
};