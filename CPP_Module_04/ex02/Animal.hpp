#ifndef ANIMAL_H
#define ANIMAL_H
# include <iostream>
# include <fstream>
# include <string>
# include <cstdlib>
# include <cstdio>
# include <cmath>
# include <cstdio>

class Animal {
public:
	Animal();
	Animal(const Animal &other);
	Animal	&operator=(const Animal &other);
	virtual ~Animal();


	std::string		getType() const;
	void			setType(const std::string &type);
	virtual void	makeSound() const = 0;

protected:
	std::string 	m_type;
};


#endif