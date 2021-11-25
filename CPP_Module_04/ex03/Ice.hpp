#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	~Ice();
	AMateria* clone() const;
	void use(ICharacter& target);


private:

	Ice(const Ice &r);
	Ice& operator=(const Ice &);
};