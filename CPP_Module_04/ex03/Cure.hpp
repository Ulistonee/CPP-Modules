#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	Cure(const std::string &type);
	~Cure();
	Cure(const Cure &other);
	Cure& operator=(const Cure &other);


	AMateria* clone() const;
	void use(ICharacter& target);
};