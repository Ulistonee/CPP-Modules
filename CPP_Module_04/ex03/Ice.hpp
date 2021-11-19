#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	Ice(const std::string &type);
	~Ice();
	Ice(const Ice &other);
	Ice& operator=(const Ice &other);


	AMateria* clone() const;
	void use(ICharacter& target);
};