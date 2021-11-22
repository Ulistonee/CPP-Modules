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

class ICharacter;

class AMateria
{
public:
	AMateria();
	AMateria(std::string const & type);
	virtual ~AMateria();
	std::string const & getType() const;


	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& type);
protected:

	std::string 		type;
private:
	AMateria 	&operator=(const AMateria &o);
	AMateria(const AMateria &);
};

#endif