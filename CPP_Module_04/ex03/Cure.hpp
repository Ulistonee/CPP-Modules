#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	~Cure();
	AMateria* clone() const;


	void use(ICharacter& target);
private:

	Cure(const Cure &);
	Cure& operator=(const Cure &);
};