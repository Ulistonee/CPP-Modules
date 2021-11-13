#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal, public Brain{
public:
	Cat();
	Cat(const Cat &other);
	~Cat();
	Cat	&operator=(const Cat &other);
	void 	makeSound() const;
};