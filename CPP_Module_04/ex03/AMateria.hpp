#ifndef AMATERIA_H
#define AMATERIA_H
# include <iostream>
# include <fstream>
# include <string>
# include <cstdlib>
# include <cstdio>
# include <cmath>
# include <cstdio>
# include "ICharacter.hpp"
class AMateria
{
protected:
	std::string 		type;
public:
	AMateria();
	AMateria(std::string const & type);
	virtual ~AMateria();
	AMateria 		&operator=(std::string const & type);


	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};


#endif