#ifndef ANIMAL_H
#define ANIMAL_H
# include <iostream>
# include <fstream>
# include <string>
# include <cstdlib>
# include <cstdio>
# include <cmath>
# include <cstdio>

class Animal
{
public:
	Animal();
	Animal(const Animal &other);
	virtual ~Animal();
	Animal	&operator=(const Animal &other);


	std::string		getType() const;
	virtual void	makeSound() const = 0;
protected:
	std::string 		m_type;
};

#endif